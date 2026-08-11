/* Ghidra address: 004e3210 */
/* Ghidra symbol: FUN_004e3210 */


bool FUN_004e3210(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_3 = 0;
  uVar1 = FUN_004e2420(param_1,param_2);
  iVar2 = FUN_004e2370(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_0041b840(param_3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x10));
  }
  else {
    FUN_0041b800(param_3);
  }
  return -1 < iVar2;
}

