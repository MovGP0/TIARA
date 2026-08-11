/* Ghidra address: 00659db0 */
/* Ghidra symbol: FUN_00659db0 */


void FUN_00659db0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1[0x58] == 0) {
    iVar1 = FUN_0064dc90(param_1);
    if (iVar1 < 1) {
      lVar3 = FUN_00442bd0(&LAB_00659e50);
      param_1[0x58] = lVar3;
    }
    else {
      lVar3 = FUN_00442b60(iVar1 + 1);
      param_1[0x58] = lVar3;
      uVar2 = FUN_00442b70(lVar3);
      FUN_0064dcb0(param_1,lVar3,uVar2);
    }
  }
  if ((*PTR_DAT_02004258 & 1) != 0) {
    FUN_00782350(&DAT_0075cd78,0,param_1);
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  FUN_0065ec70(param_1);
  return;
}

