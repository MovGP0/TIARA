/* Ghidra address: 00698600 */
/* Ghidra symbol: FUN_00698600 */


void FUN_00698600(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 8) == 0x20) {
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    uVar1 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
    lVar2 = thunk_FUN_04129e10(uVar1);
    lVar3 = FUN_00786090(param_1);
    *(bool *)(param_1 + 7) = lVar2 == lVar3;
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

