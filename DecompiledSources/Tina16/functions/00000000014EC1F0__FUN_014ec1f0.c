/* Ghidra address: 014ec1f0 */
/* Ghidra symbol: FUN_014ec1f0 */


bool FUN_014ec1f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  bool local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  if (local_res20 == 0) {
    FUN_00441920(&local_38,local_res10);
  }
  else {
    FUN_00414b50(&local_38,local_res20);
  }
  FUN_0041ddd0(&local_48,PTR_PTR_02002b58);
  local_68 = local_38;
  local_60 = 0x11;
  local_58 = local_res18;
  local_50 = 0x11;
  FUN_00442f70(&local_40,local_48,&local_68,1);
  FUN_014ebd70(param_1,local_40);
  FUN_015fcb30(local_20,PTR_DAT_02004770);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_28);
  FUN_014ebd10(param_1,&local_30);
  plVar3 = (longlong *)FUN_01b21300(local_28,&DAT_014ec50c,0);
  iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30);
  if (iVar2 == -1) {
    (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
    FUN_004b3880(plVar3,&local_28);
  }
  FUN_00410f20(plVar3);
  uVar4 = FUN_019a4600();
  FUN_00e06220(uVar4,local_20[0],local_28);
  uVar4 = FUN_00442620(param_1 + 0xb6a,local_res10);
  uVar5 = FUN_00442620(param_1 + 0x136c,local_res18);
  cVar1 = _Pkg_CompilePackage(uVar4,uVar5,1,param_1 + 0x1b6e);
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_78,PTR_PTR_02004f38);
    FUN_014ebde0(param_1,local_78);
    FUN_00416830(&local_80,param_1 + 0x1b6e,0x401);
    FUN_014ebd70(param_1,local_80);
  }
  else {
    FUN_0041ddd0(&local_70,PTR_PTR_02003f58);
    FUN_014ebde0(param_1,local_70);
  }
  local_81 = cVar1 != '\0';
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_48,6);
  FUN_00414560(&local_res10,3);
  return local_81;
}

