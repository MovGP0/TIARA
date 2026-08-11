/* Ghidra address: 00792510 */
/* Ghidra symbol: FUN_00792510 */


void FUN_00792510(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_007918e0(param_1,param_2);
  iVar2 = FUN_00791830(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

