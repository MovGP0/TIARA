/* Ghidra address: 01a99f00 */
/* Ghidra symbol: FUN_01a99f00 */


void FUN_01a99f00(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  FUN_01a98380(param_1,param_2 - param_4,param_3 - param_4,&local_2c,&local_30);
  piVar2 = &local_38;
  FUN_01a98380(param_1,param_2 + param_4,param_3 + param_4,&local_34,piVar2);
  uVar3 = (undefined4)((ulonglong)piVar2 >> 0x20);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_0412d81c(*(undefined4 *)(param_1 + 0x88));
    uVar1 = thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x148),uVar1);
    thunk_FUN_041d615e(*(undefined8 *)(param_1 + 0x148),local_2c - *(int *)(param_1 + 0x188),
                       local_30 - *(int *)(param_1 + 0x18c),local_34 - *(int *)(param_1 + 0x188),
                       CONCAT44(uVar3,local_38 - *(int *)(param_1 + 0x18c)));
    FUN_01a9a6f0(param_1,*(undefined8 *)(param_1 + 0x148),uVar1);
  }
  return;
}

