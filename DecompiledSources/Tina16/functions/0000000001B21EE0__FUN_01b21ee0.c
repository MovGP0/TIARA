/* Ghidra address: 01b21ee0 */
/* Ghidra symbol: FUN_01b21ee0 */


void FUN_01b21ee0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8 [4];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (local_res8[0] != 0) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined2 *)((longlong)plVar3 + 0x2c) = 0x2c;
    FUN_004b50b0(plVar3,local_res8[0]);
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (iVar1 < 4) {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"StringToStrings");
      FUN_004134c0(uVar4);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_20,0);
    uVar2 = FUN_0043fc00(local_20);
    *param_2 = uVar2;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_28,1);
    uVar2 = FUN_0043fc00(local_28);
    *param_3 = uVar2;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,2);
    uVar2 = FUN_0043fc00(local_30);
    *param_4 = uVar2;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_38,3);
    uVar2 = FUN_0043fc00(local_38);
    *param_5 = uVar2;
    FUN_00410f20(plVar3);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res8);
  return;
}

