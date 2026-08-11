/* Ghidra address: 016cfc70 */
/* Ghidra symbol: FUN_016cfc70 */


void FUN_016cfc70(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe70) + 0xd98) + 0x28) = param_3;
  }
  else {
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe70) + 0xda0) + 0x28) = param_3;
  }
  FUN_016cfb60(param_1,*(undefined8 *)(param_1 + 0xe70),param_2);
  return;
}

