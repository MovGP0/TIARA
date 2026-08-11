/* Ghidra address: 006fc970 */
/* Ghidra symbol: FUN_006fc970 */


void FUN_006fc970(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x4dc) != param_2) {
    *(char *)(param_1 + 0x4dc) = param_2;
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      FUN_00655b90(param_1);
    }
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
  }
  return;
}

