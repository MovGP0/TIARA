/* Ghidra address: 0174cc90 */
/* Ghidra symbol: FUN_0174cc90 */


bool FUN_0174cc90(longlong param_1)

{
  byte *local_20 [2];
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),1,local_20);
  return (uint)*local_20[0] != *(uint *)(param_1 + 0x38);
}

