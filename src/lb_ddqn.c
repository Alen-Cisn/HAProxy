/*
 * Double DQN load balancing algorithm
 *
 * Copyright 2025 Benites Milagros, Cisneros Ian, Kobylnik Fernando, Leone Nicolás
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 3 of the License, or (at your option) any later version.
 */

#include <import/eb32tree.h>
#include <haproxy/api.h>
#include <haproxy/backend.h>
#include <haproxy/queue.h>
#include <haproxy/server-t.h>
#include <haproxy/global.h>
#include <haproxy/lb_ddqn.h>
#include <onnxruntime/onnxruntime_c_api.h>
#include <onnxruntime/onnxruntime_training_c_api.h>

struct server *ddqn_get_next_server(struct proxy *p, struct server *srvtoavoid)
{
	return NULL;
}

void CreateCpuTensor(float *data, const int64_t *shape, size_t dims, size_t num_elements, OrtValue **tensor)
{
	OrtMemoryInfo *memory_info = NULL;
	OrtStatus *status = NULL;
	
	/*
	status = OrtCreateCpuMemoryInfo(OrtDeviceAllocator, OrtMemTypeDefault, &memory_info);
	if(status) {
	    const char* msg = OrtGetErrorMessage(status);
	    fprintf(stderr, "Memory info creation failed: %s\n", msg);
	    OrtReleaseStatus(status);
	    exit(1);
	}

	status = OrtCreateTensorWithDataAsOrtValue(
	    memory_info,
	    data,
	    num_elements * sizeof(float),
	    shape,
	    dims,
	    ONNX_TENSOR_ELEMENT_DATA_TYPE_FLOAT,
	    tensor
	);

	OrtReleaseMemoryInfo(memory_info);

	if(status) {
	    const char* msg = OrtGetErrorMessage(status);
	    fprintf(stderr, "Tensor creation failed: %s\n", msg);
	    OrtReleaseStatus(status);
	    exit(1);
	}
	*/
}

void train_step(OrtTrainingSession *training_session,
		float *inputs, float *targets,
		const int64_t *input_shape, size_t input_dims, size_t input_elements,
		const int64_t *target_shape, size_t target_dims, size_t target_elements)
{

	OrtValue *input_tensor = NULL;
	OrtValue *target_tensor = NULL;

	CreateCpuTensor(inputs, input_shape, input_dims, input_elements, &input_tensor);
	CreateCpuTensor(targets, target_shape, target_dims, target_elements, &target_tensor);

	const char *input_names[] = {"input", "target"}; // Must match model's input names
	const OrtValue *input_tensors[] = {input_tensor, target_tensor};

	/*OrtStatus* status = OrtTrainingRunStep(
		training_session,
		NULL,  // Run options
		input_names,
		input_tensors,
		2,
		NULL,  // Output names
		0      // Output count
	);

	if(status) {
		const char* msg = OrtGetErrorMessage(status);
		fprintf(stderr, "Training step failed: %s\n", msg);
		OrtReleaseStatus(status);
	}

	static int step = 0;
	if(++step % 1000 == 0) {
		status = OrtTrainingExportModelForInference(
			training_session,
			"target_network.onnx",
			"output"  // Must match model's output name
		);

		if(status) {
			const char* msg = OrtGetErrorMessage(status);
			fprintf(stderr, "Export failed: %s\n", msg);
			OrtReleaseStatus(status);
		}
	}

	OrtReleaseValue(input_tensor);
	OrtReleaseValue(target_tensor);*/
}
