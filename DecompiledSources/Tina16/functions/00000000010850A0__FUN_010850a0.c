/* Ghidra address: 010850a0 */
/* Ghidra symbol: FUN_010850a0 */


void FUN_010850a0(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_010af5a0(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0xa78) + 0x5e0));
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0xa78),0);
  FUN_0107a2f0(param_1,param_2);
  if (param_3 == '\0') {
    FUN_010792a0(param_1,*(undefined8 *)(param_1 + 0xab0));
  }
  else {
    FUN_010792a0(param_1,0);
  }
  return;
}

