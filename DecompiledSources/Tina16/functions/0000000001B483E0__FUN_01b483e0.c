/* Ghidra address: 01b483e0 */
/* Ghidra symbol: FUN_01b483e0 */


uint FUN_01b483e0(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ushort *puVar5;
  int iVar6;
  undefined8 local_res20;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1,0);
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x30))(param_1,&local_30,iVar6,local_res20,0);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_01b442e0,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,&local_38,(int)param_1[3],local_res20,0,0);
  FUN_00414ad0(plVar4 + 0xd8,local_38);
  FUN_00806b40(plVar4,param_3 + 2);
  FUN_00806af0(plVar4,param_2);
  FUN_004401f0(&local_40,0x408);
  FUN_0064de00(plVar4,local_40);
  FUN_01b44940(plVar4,plVar3);
  iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if (iVar2 == 1) {
    sVar1 = FUN_01d39f20(*(undefined2 *)PTR_DAT_02002a70);
    puVar5 = (ushort *)FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,sVar1 + (short)plVar4[0xd9]);
    local_44 = (uint)*puVar5;
  }
  else {
    local_44 = 0xffffffff;
  }
  FUN_00410f20(plVar4);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_res20);
  return local_44;
}

