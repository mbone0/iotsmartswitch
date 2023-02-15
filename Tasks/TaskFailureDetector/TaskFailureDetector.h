#pragma once

#include <stdbool.h>

#include "../../multitasklib.h"
#include "../../generalpurposelib.h"

#define FAILURE_ALERT_THRESHOLD 1.4
#define FAILURE_MULTITASK_TIMER 30*SECOND_MILLIS

#define FAILUREDETECTOR_METRIC_NAME_FAIL "failure"
#define FAILUREDETECTOR_METRIC_DESC_FAIL "if the device failed recently"

typedef struct
{

	float copyMeasure;
	bool failure=false;
	DelayData timer;

} FailureDetectorTaskData;

FailureDetectorTaskData FailureDetectorRuntime;


#include "TaskFailureDetector-autogenerated.h"