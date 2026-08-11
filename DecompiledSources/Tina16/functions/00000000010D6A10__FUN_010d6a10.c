/* Ghidra address: 010d6a10 */
/* Ghidra symbol: FUN_010d6a10 */


undefined4 FUN_010d6a10(longlong param_1)

{
  undefined4 local_1c [3];
  
  FUN_00409a70(*(undefined8 *)(param_1 + 0x78),local_1c,4);
  *(undefined4 *)(param_1 + 0x9c) = local_1c[0];
  return local_1c[0];
}

