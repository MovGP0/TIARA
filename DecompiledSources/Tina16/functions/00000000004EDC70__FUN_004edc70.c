/* Ghidra address: 004edc70 */
/* Ghidra symbol: FUN_004edc70 */


undefined8 FUN_004edc70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_004edf80(&PTR_FUN_004a6660,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

