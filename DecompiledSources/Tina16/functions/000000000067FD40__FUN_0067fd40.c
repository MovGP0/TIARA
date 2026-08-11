/* Ghidra address: 0067fd40 */
/* Ghidra symbol: FUN_0067fd40 */


void FUN_0067fd40(longlong param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x321) != param_2) {
    *(char *)(param_1 + 0x321) = param_2;
    *(undefined1 *)(param_1 + 0x340) = 0;
    pcVar1 = (code *)FUN_00411550(param_1,0xffc4);
    (*pcVar1)(param_1);
  }
  return;
}

