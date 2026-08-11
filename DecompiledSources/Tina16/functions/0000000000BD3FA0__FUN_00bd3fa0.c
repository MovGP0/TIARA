/* Ghidra address: 00bd3fa0 */
/* Ghidra symbol: FUN_00bd3fa0 */


void FUN_00bd3fa0(longlong param_1,byte param_2)

{
  *(undefined4 *)(param_1 + 0x50) =
       *(undefined4 *)(&DAT_01e9afb4 + (ulonglong)((param_2 & 1) != 0) * 4);
  *(bool *)(param_1 + 0x54) = (param_2 & 2) != 0;
  *(bool *)(param_1 + 0x55) = (param_2 & 4) != 0;
  *(bool *)(param_1 + 0x56) = (param_2 & 8) != 0;
  thunk_FUN_041a15ee(param_1 + 0x40);
  return;
}

