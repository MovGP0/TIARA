/* Ghidra address: 01a99d20 */
/* Ghidra symbol: FUN_01a99d20 */


void FUN_01a99d20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uVar3;
  
  FUN_01a98380(param_1,param_2,param_3,&local_1c,&local_20);
  piVar2 = &local_28;
  FUN_01a98380(param_1,param_4,param_5,&local_24,piVar2);
  uVar3 = (undefined4)((ulonglong)piVar2 >> 0x20);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_0412d81c(param_6);
    FUN_00498350(local_38,local_1c - *(int *)(param_1 + 0x188),local_20 - *(int *)(param_1 + 0x18c),
                 local_24 - *(int *)(param_1 + 0x188),
                 CONCAT44(uVar3,local_28 - *(int *)(param_1 + 0x18c)));
    thunk_FUN_03984819(*(undefined8 *)(param_1 + 0x148),local_38,uVar1);
    thunk_FUN_0416f828(uVar1);
  }
  return;
}

