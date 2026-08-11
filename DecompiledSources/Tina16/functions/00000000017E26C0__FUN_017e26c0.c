/* Ghidra address: 017e26c0 */
/* Ghidra symbol: FUN_017e26c0 */


void FUN_017e26c0(longlong param_1)

{
  char local_2a8 [640];
  undefined4 local_28;
  
  FUN_013b4a20(*(undefined8 *)(param_1 + 0x500),local_2a8);
  while (local_2a8[0] != '\x06') {
    FUN_017e1a50(*(undefined8 *)(param_1 + 0x500),local_2a8);
  }
  *(undefined4 *)(param_1 + 0x55c) = local_28;
  return;
}

