/* Ghidra address: 014ffdd0 */
/* Ghidra symbol: FUN_014ffdd0 */


void FUN_014ffdd0(longlong param_1)

{
  if (*(char *)(param_1 + 0x742) != '\0') {
    FUN_014ffa60(param_1,*(undefined8 *)(param_1 + 0x6e0));
    *(undefined1 *)(param_1 + 0x780) = 1;
    *(undefined1 *)(param_1 + 0x745) = 1;
    *(undefined1 *)(param_1 + 0x747) = 0;
    *(undefined1 *)(param_1 + 0x748) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),0);
    *(undefined1 *)(param_1 + 0x74c) = 1;
    FUN_014fedb0(param_1);
  }
  return;
}

