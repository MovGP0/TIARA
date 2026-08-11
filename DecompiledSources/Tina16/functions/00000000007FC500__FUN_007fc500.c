/* Ghidra address: 007fc500 */
/* Ghidra symbol: FUN_007fc500 */


void FUN_007fc500(longlong *param_1)

{
  code *pcVar1;
  
  if (*(char *)((longlong)param_1 + 0x691) == '\0') {
    (**(code **)(*param_1 + 0x280))(param_1);
  }
  if ((*(byte *)(param_1 + 0xd5) & 0x20) != 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
    *(byte *)(param_1 + 0xd5) = *(byte *)(param_1 + 0xd5) & 0xdf;
  }
  return;
}

