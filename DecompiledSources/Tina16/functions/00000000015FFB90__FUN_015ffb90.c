/* Ghidra address: 015ffb90 */
/* Ghidra symbol: FUN_015ffb90 */


void FUN_015ffb90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_015ffa40(local_res18,plVar2,L"|@@|");
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40,0);
  uVar1 = FUN_0043fc00(local_40[0]);
  (**(code **)(*plVar2 + 0x98))(plVar2,0);
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30,0);
  (**(code **)(*plVar2 + 0x98))(plVar2,0);
  uVar3 = FUN_007fc180(&PTR_FUN_014120d8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001b60 = uVar3;
  FUN_01412eb0(*(undefined8 *)PTR_DAT_02001b60,plVar2);
  uVar3 = FUN_00b89270();
  FUN_0041ddd0(&local_50,PTR_PTR_020029d0);
  FUN_00b8e650(uVar3,&local_48,L"HDLStrings.Msg_ShowMCUError",local_50);
  FUN_0064de00(*(undefined8 *)PTR_DAT_02001b60,local_48);
  *(undefined4 *)(*(longlong *)PTR_DAT_02001b60 + 0x748) = uVar1;
  *(undefined4 *)(*(longlong *)PTR_DAT_02001b60 + 0x754) = 0;
  FUN_00414480(*(longlong *)PTR_DAT_02001b60 + 0x758);
  FUN_0064dbe0(*(undefined8 *)(*(longlong *)PTR_DAT_02001b60 + 0x6b0),0);
  FUN_01413270(*(undefined8 *)PTR_DAT_02001b60,local_res10,local_30[0],uVar1);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001b60);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

