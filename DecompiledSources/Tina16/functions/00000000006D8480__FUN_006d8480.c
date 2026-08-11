/* Ghidra address: 006d8480 */
/* Ghidra symbol: FUN_006d8480 */


void FUN_006d8480(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x27) != '\0') {
    pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
    lVar2 = (*pcVar1)(param_1);
    if (lVar2 != 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
      lVar2 = (*pcVar1)(param_1);
      FUN_006d8430(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 0x28) + 0xb1));
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
  }
  return;
}

