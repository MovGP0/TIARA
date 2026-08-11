/* Ghidra address: 009a92e0 */
/* Ghidra symbol: FUN_009a92e0 */


bool FUN_009a92e0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00417580(param_3,&DAT_009427f8);
  uVar1 = FUN_009a83e0(param_1,param_2);
  iVar2 = FUN_009a8330(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00417c40(param_3,*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x18,&DAT_009427f8);
  }
  else {
    FUN_00417740(param_3,&DAT_009427f8);
    *param_3 = 0;
    param_3[1] = 0;
  }
  return -1 < iVar2;
}

