/* Ghidra address: 00c09b80 */
/* Ghidra symbol: FUN_00c09b80 */


void FUN_00c09b80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)(param_1 + 0x660) + 0x10) < 1) {
    FUN_0065b7b0(param_1);
  }
  else {
    uVar2 = FUN_004aecf0(*(longlong *)(param_1 + 0x660));
    pcVar3 = (code *)FUN_00411550(uVar2,0xffb3);
    cVar1 = (*pcVar3)(uVar2);
    if (cVar1 != '\0') {
      plVar4 = (longlong *)FUN_004aecf0(*(undefined8 *)(param_1 + 0x660));
      (**(code **)(*plVar4 + 600))(plVar4);
    }
  }
  return;
}

