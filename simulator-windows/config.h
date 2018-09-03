#ifndef _CONFIG_H
#define _CONFIG_H

#define DA_V 1.0f			//DA�ο���ѹ
#define AD_V 1.0f			//AD�ο���ѹ
#define DA_WIDTH 1			//DA�������ݿ��
#define AD_WIDTH 8			//AD������ݿ��
#define CROSSBAR_L 1152		//crossbar����
#define CROSSBAR_W 128		//crossbar���
#define CROSSBAR_N 4		//crossbar���� in one tile
#define AD_REUSE_NUM 32		//AD����
#define XB01_I 0.00492679327726364
#define XB2_I 0.00398490577936172
#define XB3_I 0.00257207546383142

#define KERNEL_SIZE 3
//����8bit���ݸ���, a convolution block
#define INPUT_SIZE KERNEL_SIZE*KERNEL_SIZE	
#define CHANNELS_3 3		// each input picture channels
#define PICTURE_NUM	10		// number of input pictures
#define IMAGE_SIZE_32 32		// input picture size
#define IMAGE_SIZE_16 16
#define IMAGE_SIZE_8 8
#define SIMULATE_DURATION 400	//simulation duration, in nanoseconds

#define INPUT_LINEAR_1 128 // linear layer 1 input size
#define INPUT_LINEAR_2 128 // linear layer 1 output size and linear layer 2 input size
#define	OUTPUT_LINEAR 10 // 10 classifier result

#define CHANNELS_32 32
#define CHANNELS_48 48
#define CHANNELS_80 80
#define CHANNELS_128 128
#endif // !_CONFIG_H

