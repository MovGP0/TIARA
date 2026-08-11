/* Ghidra address: 01709150 */
/* Ghidra symbol: FUN_01709150 */


undefined4 FUN_01709150(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res20;
  ulonglong uVar5;
  ulonglong in_stack_ffffffffffffffa0;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar3 = FUN_017105e0(0);
  FUN_01717780(uVar3,plVar2,*(undefined8 *)(param_1 + 0x30),4);
  plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_017059b8,1,*(undefined8 *)PTR_DAT_02004030);
  uVar5 = 0;
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,local_30,*(undefined4 *)(param_1 + 0x18),local_res20,
               0,in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  FUN_00414ad0(plVar4 + 0xe5,local_30[0]);
  FUN_00806b40(plVar4,param_3 + 2);
  FUN_00806af0(plVar4,param_2);
  FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_38,*(undefined4 *)(param_1 + 0x18),local_res20
               ,uVar5 & 0xffffffffffffff00,0);
  FUN_0064de00(plVar4,local_38);
  FUN_01706360(plVar4,plVar2);
  iVar1 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if ((iVar1 == 1) && ((int)plVar4[0xe6] != -1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,(int)plVar4[0xe6]);
    FUN_00414ad0(param_1 + 0x20,local_40);
    FUN_00414480(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = 0;
    local_44 = 0x39;
  }
  else {
    local_44 = 0xffffffff;
  }
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_res20);
  return local_44;
}

