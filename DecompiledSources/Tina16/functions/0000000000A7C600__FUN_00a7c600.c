/* Ghidra address: 00a7c600 */
/* Ghidra symbol: FUN_00a7c600 */


undefined8 FUN_00a7c600(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x30);
}

