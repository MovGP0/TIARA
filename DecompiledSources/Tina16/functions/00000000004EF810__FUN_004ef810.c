/* Ghidra address: 004ef810 */
/* Ghidra symbol: FUN_004ef810 */


undefined8 FUN_004ef810(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar1 = FUN_004efd50(&PTR_FUN_004a8d30,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x50);
}

