#ifndef __DEFINES_H_
#define __DEFINES_H_

#define FEATURE_COUNT 784 // MNIST images are 28x28 = 784 pixels
#define FEATURE_COUNT_BIASED 785
#define TRAINING_SET_COUNT 11
#define MNIST_LABEL_FILE_MAGIC_NUMBER 0x00000801
#define MNIST_IMAGE_FILE_MAGIC_NUMBER 0x00000803

#define UNKNOWN 0
#define TRAIN 1
#define TEST 2

#define DEFAULT_ALPHA 0.0001
#define DEFAULT_ITERATIONS 20
#define DEFAULT_N_ITEMS_LIMIT 60000

#define NUM_DIGITS 10
#define VERY_NEGATIVE_NUMBER -12345.6

#endif
