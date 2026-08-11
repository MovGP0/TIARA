/* Ghidra address: 01b78990 */
/* Ghidra symbol: FUN_01b78990 */


void FUN_01b78990(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_006d6420(&PTR_FUN_006ad968,1,*(undefined8 *)(param_1 + 0x6b0));
  (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_2 + 0x10));
  FUN_0064de00(plVar3,*(undefined8 *)(param_2 + 0x78));
  FUN_006d6750(plVar3,*(undefined8 *)(param_1 + 0x6b0));
  (**(code **)(*plVar3 + 0x130))(plVar3,*(undefined8 *)(param_1 + 0x6b0));
  plVar4 = (longlong *)FUN_0084d420(&PTR_FUN_0083c350,1,plVar3);
  (**(code **)(*plVar4 + 0x130))(plVar4,plVar3);
  FUN_0064c650(plVar4,5);
  (**(code **)(*plVar4 + 0x50))(plVar4,L"StringGrid");
  FUN_008483e0(plVar4,2);
  FUN_008486b0(plVar4,0);
  uVar1 = thunk_FUN_03f3ed25(0x12,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_008485d0(plVar4,uVar1);
  FUN_0041ddd0(local_30,&PTR_PTR_01b76f48);
  FUN_0084e3e0(plVar4,0,0,local_30[0]);
  FUN_0041ddd0(&local_38,&PTR_PTR_01b76f58);
  FUN_0084e3e0(plVar4,1,0,local_38);
  uVar1 = thunk_FUN_03f3ed25(0x114,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_00848460(plVar4,0,uVar1);
  uVar1 = thunk_FUN_03f3ed25(0x50,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_00848460(plVar4,1,uVar1);
  plVar4[0xba] = param_1;
  plVar4[0xb9] = (longlong)FUN_01b79110;
  plVar4[0xbe] = param_1;
  plVar4[0xbd] = (longlong)FUN_01b79370;
  plVar3 = (longlong *)FUN_006ec860(&LAB_006c18c0,1,plVar4);
  (**(code **)(*plVar3 + 0x130))(plVar3,plVar4);
  (**(code **)(*plVar3 + 0x50))(plVar3,L"Hotkey");
  FUN_0064dbe0(plVar3,0);
  plVar3[0x78] = param_1;
  plVar3[0x77] = (longlong)FUN_01b793b0;
  iVar2 = FUN_01b78c70(param_1,plVar4,param_2,0,0);
  FUN_00848a70(plVar4,(int)plVar4[0x98] + iVar2);
  FUN_00414560(&local_38,2);
  return;
}

