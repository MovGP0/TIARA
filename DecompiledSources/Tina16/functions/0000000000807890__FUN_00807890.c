/* Ghidra address: 00807890 */
/* Ghidra symbol: FUN_00807890 */


bool FUN_00807890(longlong param_1)

{
  undefined4 local_30 [9];
  uint local_c;
  
  local_30[0] = 0x28;
  thunk_FUN_04166da1(*(undefined8 *)(param_1 + 8),local_30);
  return (local_c & 1) != 0;
}

