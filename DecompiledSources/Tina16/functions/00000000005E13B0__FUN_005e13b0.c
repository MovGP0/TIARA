/* Ghidra address: 005e13b0 */
/* Ghidra symbol: FUN_005e13b0 */


void FUN_005e13b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005e0660(param_1,param_2);
  iVar2 = FUN_005e05b0(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18);
  }
  return;
}

