/* Ghidra address: 01be89c0 */
/* Ghidra symbol: FUN_01be89c0 */


void FUN_01be89c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  
  FUN_01be3130(param_1,param_2);
  if ((*(int *)(param_2 + 8) == 0x201) || (*(int *)(param_2 + 8) == 0x204)) {
    lVar2 = FUN_01be2c50(param_1,param_2);
    if (lVar2 == 0) {
      cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x408))(param_1);
      }
    }
    else if ((*(longlong **)(lVar2 + 8) == param_1) && (*(char *)(lVar2 + 0x344) != '\0')) {
      pcVar3 = (code *)FUN_00411550(lVar2,0xffea);
      (*pcVar3)(lVar2);
    }
  }
  return;
}

