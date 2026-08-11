/* Ghidra address: 017f2a00 */
/* Ghidra symbol: FUN_017f2a00 */


void FUN_017f2a00(longlong param_1,undefined8 param_2)

{
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x868),0);
  if (*(char *)(*(longlong *)(param_1 + 0x800) + 0x86) == '\0') {
    FUN_017f2a50(param_1);
  }
  else {
    FUN_017f28b0(param_1,param_2);
  }
  return;
}

