/* Ghidra address: 01a986a0 */
/* Ghidra symbol: FUN_01a986a0 */


void FUN_01a986a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  undefined1 local_38 [24];
  int local_20;
  int local_1c;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  *(int *)(param_1 + 0x80) = (int)param_3;
  piVar2 = &local_20;
  FUN_01a98380(param_1,*(undefined4 *)(param_1 + 0x7c),param_3,&local_1c,piVar2);
  uVar3 = (undefined4)((ulonglong)piVar2 >> 0x20);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    uVar1 = thunk_FUN_0412d81c(param_4);
    FUN_00498350(local_38,local_1c - *(int *)(param_1 + 0x188),local_20 - *(int *)(param_1 + 0x18c),
                 (local_1c + *(int *)PTR_DAT_02003250) - *(int *)(param_1 + 0x188),
                 CONCAT44(uVar3,(local_20 + *(int *)PTR_DAT_02003250) - *(int *)(param_1 + 0x18c)));
    thunk_FUN_03984819(*(undefined8 *)(param_1 + 0x148),local_38,uVar1);
    thunk_FUN_0416f828(uVar1);
  }
  return;
}

