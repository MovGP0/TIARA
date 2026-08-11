/* Ghidra address: 018b00a0 */
/* Ghidra symbol: FUN_018b00a0 */


void FUN_018b00a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = thunk_FUN_03d44949(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
  if (iVar1 != 0) {
    thunk_FUN_03ab0e43(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),9);
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_04161dbd(uVar2);
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

