#include "WorkItemsEnumerator.h"

// Gets the ExWorkerQueue array.
PWORKER_QUEUE ExWorkerQueue = reinterpret_cast<PWORKER_QUEUE>(0xFFFFF80003073000);

// Enumerates the system worker thread's work items.
void EnumWorkItems(WORK_QUEUE_TYPE QueueType)
{
	// Gets the worker queue structure for the queue type specified.
	WORKER_QUEUE WorkerQueue = ExWorkerQueue[QueueType];
	// Iterates through the work items.
	// Notifies the user.
	KdPrint(("There was a problem creating the device.\r\n"));
}

// The main entry of the driver.
extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
	// Enumerates the work items for the critical work queue.
	EnumWorkItems(CriticalWorkQueue);
	// Returns the status to the GsDriverEntry.
	return STATUS_SUCCESS;
}