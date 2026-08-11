/* Ghidra address: 006fc9c0 */
/* Ghidra symbol: FUN_006fc9c0 */


void FUN_006fc9c0(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x4a0) != param_2) {
    *(char *)(param_1 + 0x4a0) = param_2;
    if (param_2 != '\0') {
      *(undefined1 *)(param_1 + 0x4dd) = 1;
    }
    if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
      FUN_00655b90(param_1);
    }
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
  }
  return;
}

