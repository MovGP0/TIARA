/* Ghidra address: 0171cbd0 */
/* Ghidra symbol: FUN_0171cbd0 */


void FUN_0171cbd0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0171bfb0(param_1,param_2);
  iVar2 = FUN_0171bf00(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x10);
  }
  return;
}

