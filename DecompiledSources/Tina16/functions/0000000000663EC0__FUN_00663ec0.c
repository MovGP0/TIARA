/* Ghidra address: 00663ec0 */
/* Ghidra symbol: FUN_00663ec0 */


int FUN_00663ec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  int local_1c;
  
  lVar2 = FUN_00660e20(param_2);
  if (lVar2 == 0) {
    iVar1 = FUN_00660cd0(param_2);
    local_1c = FUN_006606d0(param_2);
    local_1c = iVar1 + local_1c;
  }
  else {
    uVar3 = FUN_00660e20(param_2);
    local_1c = FUN_00660cd0(uVar3);
  }
  FUN_00663e10(auStack_48,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10));
  return local_1c;
}

