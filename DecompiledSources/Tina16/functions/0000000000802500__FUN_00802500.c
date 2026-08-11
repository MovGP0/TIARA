/* Ghidra address: 00802500 */
/* Ghidra symbol: FUN_00802500 */


void FUN_00802500(undefined8 param_1,longlong param_2)

{
  *(uint *)(*(longlong *)(param_2 + 0x88) + 0xa4) =
       *(uint *)(*(longlong *)(param_2 + 0x88) + 0xa4) & 0xffffffdf;
  return;
}

