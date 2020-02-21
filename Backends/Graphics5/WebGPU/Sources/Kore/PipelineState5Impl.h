#pragma once

#include <webgpu.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	WGPURenderPipeline pipeline;
} PipelineState5Impl;

typedef struct {
	int vertexOffset;
	int fragmentOffset;
} ConstantLocation5Impl;

#ifdef __cplusplus
}
#endif
