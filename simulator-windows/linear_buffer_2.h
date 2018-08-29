#ifndef _LINEAR_BUFFER_2
#define _LINEAR_BUFFER_2

#include "systemc.h"
#include "config.h"

using namespace std;

SC_MODULE(linear_buffer_2) {
	// linear buffer 2
	sc_in<float> input[INPUT_LINEAR_2]; // in linear buffer 2, upper layer is linear layer and its output is 128
	sc_out<float> output[INPUT_LINEAR_2];
	sc_in<int> signal_in;
	sc_in<bool> clock_1;
	sc_out<int> signal_out;

	float buffer[INPUT_LINEAR_2];
	int current;

	void init() {
		current = 0;
	}

	void send_to_next_layer() {
		if (current == INPUT_LINEAR_2) {
			for (int i = 0; i < INPUT_LINEAR_2; i++)
				output[i].write(buffer[i]);
			signal_out.write(signal_in.read());
			current = 0;
		}
	}

	void add_to_buffer() {
		for (int i = 0; i < INPUT_LINEAR_2; i++)
			buffer[i] = input[i].read();
		current += INPUT_LINEAR_2;
	}

	SC_CTOR(linear_buffer_2) {
		init();

		SC_METHOD(add_to_buffer);
		sensitive << signal_in;
		dont_initialize();

		SC_METHOD(send_to_next_layer);
		sensitive << clock_1.neg();
		dont_initialize();
	}
};


#endif // !_LINEAR_BUFFER_2
