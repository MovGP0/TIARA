/* Ghidra address: 00666160 */
/* Ghidra symbol: FUN_00666160 */


void FUN_00666160(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  FUN_00655080(param_1);
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    uVar4 = FUN_0065b870(param_1);
    uVar5 = thunk_FUN_04118143(uVar4,0xffffffec);
    thunk_FUN_03c9d277(uVar3,0xffffffec,uVar5 | 0x80000);
    uVar3 = FUN_0065b870(param_1);
    (**(code **)PTR_DAT_02003560)(uVar3,0xff00,0,3);
  }
  return;
}

