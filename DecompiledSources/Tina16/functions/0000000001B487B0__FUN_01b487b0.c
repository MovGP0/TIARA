/* Ghidra address: 01b487b0 */
/* Ghidra symbol: FUN_01b487b0 */


uint FUN_01b487b0(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort *puVar4;
  int iVar5;
  undefined8 local_res20;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffffa0;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x30))(param_1,&local_30,iVar5,local_res20,0);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_01b442e0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar6 = 0;
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,&local_38,(int)param_1[3],local_res20,0,
               in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  FUN_00414ad0(plVar3 + 0xd8,local_38);
  FUN_00806b40(plVar3,param_3 + 2);
  FUN_00806af0(plVar3,param_2);
  FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_40,(int)param_1[3],local_res20,
               uVar6 & 0xffffffffffffff00,0);
  FUN_0064de00(plVar3,local_40);
  FUN_01b44940(plVar3,plVar2);
  iVar1 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar1 == 1) {
    puVar4 = (ushort *)
             FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,(short)param_1[4] + (short)plVar3[0xd9]);
    local_44 = (uint)*puVar4;
  }
  else {
    local_44 = 0xffffffff;
  }
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_res20);
  return local_44;
}

