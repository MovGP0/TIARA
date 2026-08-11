/* Ghidra address: 01a99c30 */
/* Ghidra symbol: FUN_01a99c30 */


void FUN_01a99c30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_01a98380(param_1,param_2,param_3,&local_1c,&local_20);
  piVar2 = &local_28;
  FUN_01a98380(param_1,param_4,param_5,&local_24,piVar2);
  uVar3 = (undefined4)((ulonglong)piVar2 >> 0x20);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_041715dd(5);
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    thunk_FUN_041cd445(*(undefined8 *)(param_1 + 0x148),local_1c - *(int *)(param_1 + 0x188),
                       local_20 - *(int *)(param_1 + 0x18c),local_24 - *(int *)(param_1 + 0x188),
                       CONCAT44(uVar3,local_28 - *(int *)(param_1 + 0x18c)));
    if (*(char *)(param_1 + 0x12f) == '\0') {
      thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    }
    else {
      uVar1 = thunk_FUN_041715dd(0);
      thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    }
  }
  return;
}

