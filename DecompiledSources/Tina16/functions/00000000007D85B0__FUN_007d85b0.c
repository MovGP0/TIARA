/* Ghidra address: 007d85b0 */
/* Ghidra symbol: FUN_007d85b0 */


void FUN_007d85b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_40;
  int local_3c [3];
  
  FUN_007d57e0(param_1);
  iVar3 = FUN_004b6da0(param_2);
  (**(code **)(*param_2 + 0x18))(param_2,local_3c,4);
  (**(code **)(*param_2 + 0x18))(param_2,&local_40,4);
  iVar1 = local_3c[0];
  cVar2 = (char)local_3c[0];
  FUN_004b6dc0(param_2,(longlong)iVar3);
  if (((local_3c[0] == local_40) || (cVar2 != 'I')) || ((char)((uint)iVar1 >> 8) != 'L')) {
    FUN_007d7f30(param_1,param_2);
  }
  else {
    FUN_007d8380(param_1,param_2);
  }
  plVar5 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
  if (cVar2 == '\0') {
    uVar6 = FUN_007d56e0(param_1);
    uVar7 = FUN_007d56e0(param_1);
    uVar4 = thunk_FUN_041da135(uVar7);
    thunk_FUN_04178505(uVar6,uVar4);
  }
  return;
}

