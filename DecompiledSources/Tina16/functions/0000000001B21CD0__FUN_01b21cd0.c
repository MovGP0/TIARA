/* Ghidra address: 01b21cd0 */
/* Ghidra symbol: FUN_01b21cd0 */


void FUN_01b21cd0(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar2 + 0x2c) = param_2;
  FUN_004b50b0(plVar2,local_res8[0]);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (iVar1 < 6) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"StringToStrings");
    FUN_004134c0(uVar3);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,0);
  FUN_00414ad0(param_3,local_20);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,1);
  FUN_00414ad0(param_4,local_28);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,2);
  FUN_00414ad0(param_5,local_30);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,3);
  FUN_00414ad0(param_6,local_38);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,4);
  FUN_00414ad0(param_7,local_40);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,5);
  FUN_00414ad0(param_8,local_48);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_48,6);
  FUN_00414480(local_res8);
  return;
}

