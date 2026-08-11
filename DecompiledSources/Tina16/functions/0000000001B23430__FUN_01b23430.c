/* Ghidra address: 01b23430 */
/* Ghidra symbol: FUN_01b23430 */


void FUN_01b23430(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar1);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_30[0]);
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  (**(code **)(*param_1 + 0x10))(param_1,plVar2);
  FUN_00410f20(plVar2);
  FUN_00414480(local_30);
  return;
}

