/* Ghidra address: 00da0b90 */
/* Ghidra symbol: FUN_00da0b90 */


void FUN_00da0b90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00d9ff60(param_1,param_2);
  iVar2 = FUN_00d9feb0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

