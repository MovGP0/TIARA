/* Ghidra address: 007903e0 */
/* Ghidra symbol: FUN_007903e0 */


void FUN_007903e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0078f680(param_1,param_2);
  iVar2 = FUN_0078f5d0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

