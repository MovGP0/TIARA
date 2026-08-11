/* Ghidra address: 00452190 */
/* Ghidra symbol: FUN_00452190 */


void FUN_00452190(longlong param_1)

{
  longlong local_20 [2];
  
  FUN_00451da0(*(undefined8 *)(param_1 + 0x38),local_20);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    LOCK();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0xffff;
    UNLOCK();
    FUN_00452040(param_1);
    FUN_00452020(param_1);
  }
  if (*(int *)(local_20[0] + 0x10) == 0) {
    FUN_00451e30(*(undefined8 *)(param_1 + 0x38),local_20);
  }
  return;
}

