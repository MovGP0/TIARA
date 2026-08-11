/* Ghidra address: 00c778e0 */
/* Ghidra symbol: FUN_00c778e0 */


void FUN_00c778e0(longlong param_1)

{
  if ((*(ushort *)(param_1 + 0x388) & 4) == 0) {
    FUN_00c777b0(param_1,0);
    FUN_00c78bb0(param_1,0);
  }
  else if (*(char *)(param_1 + 0x2a0) == '\x01') {
    FUN_00c78bb0(param_1,0);
    FUN_00c777b0(param_1,1);
  }
  else {
    FUN_00c777b0(param_1,0);
    FUN_00c78bb0(param_1,1);
  }
  return;
}

