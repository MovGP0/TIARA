/* Ghidra address: 00f35f80 */
/* Ghidra symbol: FUN_00f35f80 */


bool FUN_00f35f80(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_3 = 0;
  uVar1 = FUN_00f35190(param_1,param_2);
  iVar2 = FUN_00f350e0(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00414ad0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x10));
  }
  else {
    FUN_00414480(param_3);
  }
  return -1 < iVar2;
}

