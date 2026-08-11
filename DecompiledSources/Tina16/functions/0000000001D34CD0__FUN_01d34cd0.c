/* Ghidra address: 01d34cd0 */
/* Ghidra symbol: FUN_01d34cd0 */


undefined8 FUN_01d34cd0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 < 1) {
    uVar2 = 0;
    FUN_01d34ef0(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1[1] + (longlong)(iVar1 + -1) * 8);
  }
  return uVar2;
}

