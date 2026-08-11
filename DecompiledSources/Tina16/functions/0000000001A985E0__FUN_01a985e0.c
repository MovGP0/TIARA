/* Ghidra address: 01a985e0 */
/* Ghidra symbol: FUN_01a985e0 */


void FUN_01a985e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int local_20;
  int local_1c [3];
  
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(int *)(param_1 + 0x80) = (int)param_3;
  FUN_01a98380(param_1,*(undefined4 *)(param_1 + 0x7c),param_3,local_1c,&local_20);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    FUN_00b94cb0(*(undefined8 *)(param_1 + 0x148),local_1c[0] - *(int *)(param_1 + 0x188),
                 local_20 - *(int *)(param_1 + 0x18c));
  }
  return;
}

