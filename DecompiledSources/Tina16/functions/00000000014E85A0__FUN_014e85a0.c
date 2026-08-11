/* Ghidra address: 014e85a0 */
/* Ghidra symbol: FUN_014e85a0 */


void FUN_014e85a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_0043f750(local_30,*(undefined4 *)(param_1 + 0x48));
    FUN_00416cd0(local_20,6,*(undefined8 *)(param_1 + 0xa0),L"simprim_VITAL",&DAT_014e8924,
                 *(undefined8 *)(param_1 + 0x68),local_30[0],L".vhd");
  }
  else if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_0043f750(&local_38,*(undefined4 *)(param_1 + 0x48));
    FUN_00416cd0(local_20,6,*(undefined8 *)(param_1 + 0xa0),L"unisim_VITAL",&DAT_014e8924,
                 *(undefined8 *)(param_1 + 0x68),local_38,L".vhd");
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 0)) {
    FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0x48));
    FUN_00416cd0(local_20,6,*(undefined8 *)(param_1 + 0xa0),L"verilog_simprim_VITAL",&DAT_014e8924,
                 *(undefined8 *)(param_1 + 0x68),local_40,&PTR_DAT_014e89ac);
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 1)) {
    FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x48));
    FUN_00416cd0(local_20,7,*(undefined8 *)(param_1 + 0xa0),L"verilog_unisim_VITAL",&DAT_014e8924,
                 *(undefined8 *)(param_1 + 0x68),L"_test_",local_48,&PTR_DAT_014e89ac);
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,0);
    FUN_004134c0(uVar2);
  }
  FUN_00441920(&local_50,local_20[0]);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb0))
                    (*(longlong **)(param_1 + 0x40),local_50);
  if (iVar1 == -1) {
    FUN_00441920(&local_58,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_58);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x100))(*(longlong **)(param_1 + 0x28),local_20[0])
  ;
  FUN_00414560(&local_58,6);
  FUN_00414480(local_20);
  return;
}

