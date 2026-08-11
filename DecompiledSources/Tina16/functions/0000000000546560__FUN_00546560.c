/* Ghidra address: 00546560 */
/* Ghidra symbol: FUN_00546560 */


undefined8 FUN_00546560(longlong *param_1,undefined8 param_2)

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
  FUN_00419260(local_30,&DAT_00547350,1,(longlong)iVar3);
  iVar3 = 0;
  for (; param_1 != (longlong *)0x0; param_1 = (longlong *)(**(code **)(*param_1 + 0x38))(param_1))
  {
    (**(code **)(*param_1 + 0x98))(param_1,local_40);
    FUN_004194b0(local_30[0] + (longlong)iVar3 * 8,local_40[0],&DAT_0052f6a0);
    iVar3 = iVar3 + 1;
  }
  lVar2 = 0;
  if (local_30[0] != 0) {
    lVar2 = *(longlong *)(local_30[0] + -8);
  }
  FUN_00565d70(param_2,local_30[0],lVar2 + -1);
  FUN_00419430(local_40,&DAT_0052f6a0);
  FUN_00419430(local_30,&DAT_00547350);
  return param_2;
}

