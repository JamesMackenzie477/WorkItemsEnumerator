#pragma once
#include <wdm.h>
#include <windef.h>

// A worker queue structure used to enumerate the workers associated with the queue.
typedef struct _WORKER_QUEUE
{
	char pad_0x0[0x4];
	DWORD Count; // The amount of work items associated with this worker queue.
	char pad_0x8[0x10];
	LIST_ENTRY WorkItems; // A linked list of work items for this system worker queue.
	char pad_0x28[0x30];
} WORKER_QUEUE, *PWORKER_QUEUE;