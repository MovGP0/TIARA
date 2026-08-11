/* Ghidra address: 01139c70 */
/* Ghidra symbol: FUN_01139c70 */


void FUN_01139c70(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_19 [9];
  
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmFuncGen");
  *(undefined1 *)(param_1 + 0xff) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7fa) = 3;
  (**(code **)(*param_1 + 0x450))(param_1);
  FUN_010e1dd0(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x7f9) == '\0') {
    lVar1 = FUN_010dbbd0(&PTR_FUN_01109f78,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x143] = lVar1;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x7f9) != '\x01') goto LAB_01139f51;
    lVar1 = FUN_010dbbd0(&PTR_FUN_01108fb0,1,(int)param_1[0xfd],param_1[0xfe]);
    param_1[0x143] = lVar1;
    uVar2 = FUN_004113f0(lVar1,&PTR_FUN_01108fb0);
    FUN_0110c4f0(uVar2,local_19);
  }
  (**(code **)(*(longlong *)param_1[0x143] + 0x48))((longlong *)param_1[0x143],local_19);
  FUN_00415020((longlong)param_1 + 0x889,param_1[0x143] + 0x23,0x28);
  FUN_0064dd90(param_1,&local_38);
  FUN_004169a0(&local_40,param_1[0x143] + 0x23);
  FUN_00416cd0(local_30,3,local_38,&LAB_01139fe0,local_40);
  FUN_0064de00(param_1,local_30[0]);
  FUN_0064dd90(param_1,&local_48);
  FUN_00414ad0(param_1 + 0x153,local_48);
  *(undefined1 *)((longlong)param_1 + 0xa8a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8b) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8c) = 0;
  *(undefined1 *)(param_1 + 0x141) = 1;
  *(undefined2 *)((longlong)param_1 + 0xa8e) = 0;
  *(undefined2 *)(param_1 + 0x152) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa92) = 0;
  *(undefined1 *)(param_1 + 0x144) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa09) = 0;
  param_1[0x148] = 0x4024000000000000;
  param_1[0x145] = 0;
  param_1[0x14c] = param_1[0x145];
  param_1[0x149] = 0x3ff0000000000000;
  param_1[0x147] = 0x408f400000000000;
  param_1[0x14a] = 0x4008000000000000;
  *(undefined4 *)(param_1 + 0x14b) = 10;
  *(undefined1 *)((longlong)param_1 + 0xa0c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa6c) = 0;
  *(undefined1 *)(param_1 + 0x14e) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa74) = 4;
  (**(code **)(*(longlong *)param_1[300] + 0x128))((longlong *)param_1[300],1);
  FUN_0064cf60(param_1,0x5dd);
  *(undefined1 *)((longlong)param_1 + 0xa71) = 1;
  FUN_0113cec0();
  *(undefined4 *)(param_1 + 0x146) = 0;
LAB_01139f51:
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

