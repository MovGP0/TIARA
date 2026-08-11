/* Ghidra address: 019806a0 */
/* Ghidra symbol: FUN_019806a0 */


undefined8 FUN_019806a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),0);
  }
  return uVar1;
}

