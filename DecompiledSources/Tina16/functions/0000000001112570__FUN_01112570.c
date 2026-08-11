/* Ghidra address: 01112570 */
/* Ghidra symbol: FUN_01112570 */


void FUN_01112570(longlong param_1)

{
  code *pcVar1;
  
  FUN_0064e190(param_1,0);
  if ((*(char *)(param_1 + 0x5c0) != '\0') && (*(char *)(param_1 + 0x5c1) != '\0')) {
    *(undefined1 *)(param_1 + 0x5c1) = 0;
    FUN_011116f0(param_1,*(undefined1 *)(param_1 + 0x5c2),*(undefined4 *)(param_1 + 0x5c4));
    FUN_01112430(param_1,*(undefined1 *)(param_1 + 0x5c2));
    if ((*(char *)(param_1 + 0x658) != '\0') &&
       ((*(int *)(param_1 + 0x634) == 0 && (*(char *)(param_1 + 0x611) != '\0')))) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffac);
      (*pcVar1)(param_1,*(undefined1 *)(param_1 + 0x5c2));
      FUN_01111400(param_1);
    }
  }
  *(undefined1 *)(param_1 + 0x5c0) = 0;
  return;
}

