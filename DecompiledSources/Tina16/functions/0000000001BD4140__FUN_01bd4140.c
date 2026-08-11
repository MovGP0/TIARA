/* Ghidra address: 01bd4140 */
/* Ghidra symbol: FUN_01bd4140 */


void FUN_01bd4140(longlong param_1)

{
  code *pcVar1;
  
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x370),*(undefined1 *)(param_1 + 0x38c));
  if (*(char *)(param_1 + 0x38c) != '\0') {
    FUN_00742ed0(*(undefined8 *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x388));
  }
  pcVar1 = (code *)FUN_00411550(param_1,0xffea);
  (*pcVar1)(param_1);
  return;
}

