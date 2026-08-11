/* Ghidra address: 00682130 */
/* Ghidra symbol: FUN_00682130 */


void FUN_00682130(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  
  FUN_0065ebd0(param_1);
  cVar3 = FUN_0065be20(param_1);
  if (cVar3 == '\0') {
    bVar5 = true;
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    bVar4 = thunk_FUN_04118143(uVar2,0xfffffff0);
    bVar5 = (bVar4 & 4) != 0;
  }
  if (bVar5) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar1)(param_1);
  }
  return;
}

