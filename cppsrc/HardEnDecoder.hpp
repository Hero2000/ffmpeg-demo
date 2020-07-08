//
//  hardDecoder.hpp
//  video_encode_decode
//
//  Created by apple on 2020/4/22.
//  Copyright © 2020 apple. All rights reserved.
//

#ifndef hardDecoder_hpp
#define hardDecoder_hpp
#include <string>
#include <stdio.h>
#include "cppcommon/CLog.h"
#include <sys/time.h>

extern "C"
{
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/hwcontext.h>
#include <libavutil/pixfmt.h>
#include <libavutil/error.h>
}
using namespace::std;

class HardEnDecoder
{
public:
    HardEnDecoder();
    ~HardEnDecoder();
    
    void doDecode(string srcPath);
    void doEncode(string srcPath,string dstPath);
};

#endif /* hardDecoder_hpp */
