/* Ghidra address: 01be5b50 */
/* Ghidra symbol: FUN_01be5b50 */


void FUN_01be5b50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
    (**(code **)(*param_1 + 0x438))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x428))(param_1);
  }
  iVar2 = FUN_0044f080();
  if (iVar2 < 5) {
    bVar7 = false;
  }
  else {
    uVar3 = FUN_0065b870(param_1);
    uVar4 = thunk_FUN_04118143(uVar3,0xffffffec);
    bVar7 = (uVar4 & 0x80000) == 0;
  }
  if (bVar7) {
    plVar5 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar5 + 0x98))(plVar5);
    if (cVar1 != '\0') {
      uVar3 = FUN_00781840();
      cVar1 = FUN_00779360(uVar3);
      if (cVar1 == '\0') {
        uVar3 = FUN_0065b870(param_1);
        uVar6 = FUN_0065b870(param_1);
        uVar4 = thunk_FUN_04118143(uVar6,0xffffffec);
        thunk_FUN_03c9d277(uVar3,0xffffffec,uVar4 | 0x80000);
        uVar3 = FUN_0065b870(param_1);
        (**(code **)PTR_DAT_02003560)(uVar3,0,0,2);
        FUN_0065a1e0(param_1,param_2);
        uVar3 = FUN_0065b870(param_1);
        (**(code **)PTR_DAT_02003560)(uVar3,0,0xff,2);
        return;
      }
    }
  }
  FUN_0065a1e0(param_1,param_2);
  return;
}

