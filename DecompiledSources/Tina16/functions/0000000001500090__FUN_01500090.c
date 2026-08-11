/* Ghidra address: 01500090 */
/* Ghidra symbol: FUN_01500090 */


void FUN_01500090(longlong param_1)

{
  FUN_014ffa60(param_1,*(undefined8 *)(param_1 + 0x700));
  *(undefined1 *)(param_1 + 0x780) = 0;
  *(undefined1 *)(param_1 + 0x745) = 1;
  *(undefined1 *)(param_1 + 0x747) = 1;
  *(undefined1 *)(param_1 + 0x748) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),0);
  *(undefined1 *)(param_1 + 0x74c) = 0;
  FUN_014fedb0(param_1);
  return;
}

