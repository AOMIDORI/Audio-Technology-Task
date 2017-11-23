#ifndef MAIN_H
#define MAIN_H

#include <portaudio.h>
#include <QtWidgets>
#include <sndfile.h>
#include <portaudio.h>

#define NUM_SECONDS   (5)
#define SAMPLE_RATE   (44100)
#define FRAMES_PER_BUFFER  (64)

#ifndef M_PI
#define M_PI  (3.14159265)
#endif

#define TABLE_SIZE   (200)

typedef struct{
    SNDFILE *file;
    SF_INFO info;
}CallbackData;




#endif // MAIN_H
