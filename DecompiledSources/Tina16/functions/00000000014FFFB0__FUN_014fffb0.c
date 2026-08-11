/* Ghidra address: 014fffb0 */
/* Ghidra symbol: FUN_014fffb0 */


void FUN_014fffb0(longlong param_1)

{
  FUN_014ffa60(param_1,*(undefined8 *)(param_1 + 0x6f8));
  *(undefined1 *)(param_1 + 0x780) = 0;
  *(undefined1 *)(param_1 + 0x745) = 0;
  *(undefined1 *)(param_1 + 0x747) = 1;
  *(undefined1 *)(param_1 + 0x748) = 1;
  *(undefined1 *)(param_1 + 0x746) = 1;
  FUN_01522550(*(undefined8 *)PTR_DAT_02001440,*(double *)(param_1 + 0x750) - 1e-12,param_1 + 0x768,
               param_1 + 0x770);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x768);
  if (*(double *)(param_1 + 0x750) <= 0.0 && *(double *)(param_1 + 0x750) != 0.0) {
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),0);
  *(undefined1 *)(param_1 + 0x74c) = 0;
  FUN_014fedb0(param_1);
  return;
}

