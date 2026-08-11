/* Ghidra address: 006da090 */
/* Ghidra symbol: FUN_006da090 */


void FUN_006da090(longlong param_1,char param_2)

{
  longlong lVar1;
  code *pcVar2;
  
  if (param_2 != *(char *)(param_1 + 0x2f)) {
    *(char *)(param_1 + 0x2f) = param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    if (lVar1 != 0) {
      pcVar2 = (code *)FUN_00411550(lVar1,0xffee);
      (*pcVar2)(lVar1);
    }
  }
  return;
}

