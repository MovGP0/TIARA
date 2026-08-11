/* Ghidra address: 0154c930 */
/* Ghidra symbol: FUN_0154c930 */


void FUN_0154c930(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined *puVar1;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x970,L"tina");
  if (*(char *)(param_1 + 0x94c) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x998) + 0x78))
              (*(longlong **)(param_1 + 0x998),*(undefined8 *)(param_1 + 0x970));
  }
  FUN_00414ad0(param_1 + 0x758,local_res10[0]);
  FUN_015f20a0(param_1 + 0x758);
  FUN_00416cd0(param_1 + 0x760,3,&PTR_u_HAN__0154cc18,*(undefined8 *)(param_1 + 0x758),L"_entity");
  FUN_00416cd0(param_1 + 0x778,3,&PTR_u_HAN__0154cc48,*(undefined8 *)(param_1 + 0x758),L"_arch");
  FUN_00414ad0(param_1 + 0x780,L"testbnch");
  if (*(char *)(param_1 + 0x949) != '\0') {
    FUN_00414ad0(param_1 + 0x760,L"Temp");
  }
  FUN_00415dd0(&local_18,*(undefined8 *)(param_1 + 0x760),0);
  FUN_0154b610(&local_10,local_18);
  FUN_00416880(&local_20,local_10);
  puVar1 = &DAT_0154ccac;
  FUN_00416cd0(param_1 + 0x790,4,*(undefined8 *)(param_1 + 0x7a0),&DAT_0154ccac,local_20,
               &DAT_0154ccac);
  FUN_00b96df0(*(undefined8 *)(param_1 + 0x790));
  FUN_00416cd0(param_1 + 0x720,3,*(undefined8 *)(param_1 + 0x790),L"_comp",L".vhd");
  FUN_00416cd0(param_1 + 0x728,3,*(undefined8 *)(param_1 + 0x790),*(undefined8 *)(param_1 + 0x758),
               L".ucf");
  if (*(char *)(param_1 + 0x949) != '\0') {
    FUN_00416cd0(param_1 + 0x720,3,*(undefined8 *)(param_1 + 0x790),&LAB_0154cd04,L".vhd",puVar1);
  }
  FUN_00414480(&local_20);
  FUN_00414590(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

