/* Ghidra address: 00d2aa20 */
/* Ghidra symbol: FUN_00d2aa20 */


undefined8 FUN_00d2aa20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = FUN_00d20b40();
    *(undefined8 *)(param_1 + 0x80) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x80);
}

