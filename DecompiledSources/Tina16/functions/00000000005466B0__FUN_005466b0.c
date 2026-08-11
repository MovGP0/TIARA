/* Ghidra address: 005466b0 */
/* Ghidra symbol: FUN_005466b0 */


undefined8 FUN_005466b0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  iVar3 = 0;
  for (plVar1 = param_1; plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x38))(plVar1)) {
    iVar3 = iVar3 + 1;
  }
  FUN_00419260(local_30,&DAT_005473b0,1,(longlong)iVar3);
  iVar3 = 0;
  for (; param_1 != (longlong *)0x0; param_1 = (longlong *)(**(code **)(*param_1 + 0x38))(param_1))
  {
    (**(code **)(*param_1 + 0xa0))(param_1,local_40);
    FUN_004194b0(local_30[0] + (longlong)iVar3 * 8,local_40[0],&DAT_0052f750);
    iVar3 = iVar3 + 1;
  }
  lVar2 = 0;
  if (local_30[0] != 0) {
    lVar2 = *(longlong *)(local_30[0] + -8);
  }
  FUN_00565e50(param_2,local_30[0],lVar2 + -1);
  FUN_00419430(local_40,&DAT_0052f750);
  FUN_00419430(local_30,&DAT_005473b0);
  return param_2;
}

