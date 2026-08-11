/* Ghidra address: 01beb0c0 */
/* Ghidra symbol: FUN_01beb0c0 */


void FUN_01beb0c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  FUN_01bd3530(param_1);
  lVar2 = FUN_01beb450(param_1);
  if (*(char *)(lVar2 + 0x593) == '\0') {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x344) == '\0')) {
      lVar2 = FUN_01beb450(param_1);
      if (*(char *)(lVar2 + 0x592) != '\0') {
        *(undefined1 *)(param_1 + 0x369) = 1;
        pcVar4 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar4)(param_1);
      }
    }
  }
  return;
}

