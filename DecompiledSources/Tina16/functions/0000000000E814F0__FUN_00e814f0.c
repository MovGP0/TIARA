/* Ghidra address: 00e814f0 */
/* Ghidra symbol: FUN_00e814f0 */


undefined8 FUN_00e814f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 0x400b8) + 0x10))) {
    uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x400b8));
  }
  return uVar1;
}

