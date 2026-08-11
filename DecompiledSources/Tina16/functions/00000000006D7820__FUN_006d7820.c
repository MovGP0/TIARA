/* Ghidra address: 006d7820 */
/* Ghidra symbol: FUN_006d7820 */


void FUN_006d7820(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_006d73d0(param_1,*(undefined8 *)(param_1 + 0x530),param_2,param_3);
  if ((lVar2 != 0) && (lVar2 != *(longlong *)(param_1 + 0x530))) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffac);
    cVar1 = (*pcVar3)(param_1);
    if (cVar1 != '\0') {
      FUN_006d78a0(param_1,lVar2);
      pcVar3 = (code *)FUN_00411550(param_1,0xffab);
      (*pcVar3)(param_1);
    }
  }
  return;
}

