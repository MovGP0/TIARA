/* Ghidra address: 00655750 */
/* Ghidra symbol: FUN_00655750 */


void FUN_00655750(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x58] == 0) {
    iVar2 = FUN_0064dc90(param_1);
    if (iVar2 < 1) {
      lVar1 = FUN_00442bd0(&LAB_006557c8);
      param_1[0x58] = lVar1;
    }
    else {
      lVar1 = FUN_00442b60(iVar2 + 1);
      param_1[0x58] = lVar1;
      uVar3 = FUN_00442b70(lVar1);
      FUN_0064dcb0(param_1,lVar1,uVar3);
    }
  }
  FUN_0064af50();
  (**(code **)(*param_1 + 0x1f0))(param_1);
  return;
}

