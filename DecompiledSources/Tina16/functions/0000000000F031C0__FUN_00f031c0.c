/* Ghidra address: 00f031c0 */
/* Ghidra symbol: FUN_00f031c0 */


undefined8 FUN_00f031c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x40);
}

