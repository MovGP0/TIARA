/* Ghidra address: 00800410 */
/* Ghidra symbol: FUN_00800410 */


undefined8 FUN_00800410(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x650) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x650) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x650);
}

