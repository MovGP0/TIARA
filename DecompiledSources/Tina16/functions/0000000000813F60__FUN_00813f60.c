/* Ghidra address: 00813f60 */
/* Ghidra symbol: FUN_00813f60 */


void FUN_00813f60(longlong param_1,undefined4 param_2)

{
  thunk_FUN_0399f62b(0);
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  if ((char)param_2 == '\0') {
    FUN_00814530(param_1,1);
  }
  FUN_00814130(param_1,param_2);
  return;
}

