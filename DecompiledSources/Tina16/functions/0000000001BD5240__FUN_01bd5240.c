/* Ghidra address: 01bd5240 */
/* Ghidra symbol: FUN_01bd5240 */


void FUN_01bd5240(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  
  lVar2 = FUN_01c07120(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    if (cVar1 == '\0') {
      pcVar4 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar4)(param_1);
    }
  }
  return;
}

