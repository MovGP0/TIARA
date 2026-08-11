/* Ghidra address: 01340aa0 */
/* Ghidra symbol: FUN_01340aa0 */


bool FUN_01340aa0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  bool local_29;
  
  lVar4 = param_1[0x61];
  iVar1 = *(int *)((longlong)param_1 + 0x31c);
  FUN_016f5570(param_1,param_2);
  iVar2 = (int)param_1[0x61];
  iVar3 = *(int *)((longlong)param_1 + 0x31c);
  local_29 = iVar2 != (int)lVar4;
  if (local_29) {
    FUN_017c58c0(param_1[0x1b],iVar2);
    (**(code **)(*param_1 + 0x18))(param_1,iVar2);
  }
  local_29 = !local_29;
  if (iVar3 != iVar1) {
    FUN_017c53f0(param_1 + 0x37,param_1 + 0x3f,param_1 + 0x30,param_1 + 0x31,param_1 + 0x32,
                 param_1 + 0x33,iVar3);
  }
  FUN_016f66e0(param_1);
  cVar5 = FUN_01b07dd0(param_1);
  if ((cVar5 != '\0') && (param_2 == 0)) {
    uVar6 = FUN_014cdce0(param_1[0x1d]);
    _ResetDigitalValues(uVar6,1);
  }
  return local_29;
}

