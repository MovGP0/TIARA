/* Ghidra address: 0065d570 */
/* Ghidra symbol: FUN_0065d570 */


void FUN_0065d570(longlong param_1,int param_2,char param_3)

{
  if (param_2 == 0) {
    if (param_3 != *(char *)(param_1 + 0x31b)) {
      *(char *)(param_1 + 0x31b) = param_3;
      FUN_0064fca0(param_1,0xb03b,0,0);
    }
  }
  else if ((param_2 == 1) && (param_3 != *(char *)(param_1 + 0x31c))) {
    *(char *)(param_1 + 0x31c) = param_3;
    FUN_0064fca0(param_1,0xb03b,0,0);
  }
  return;
}

