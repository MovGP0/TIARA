/* Ghidra address: 0107c1e0 */
/* Ghidra symbol: FUN_0107c1e0 */


undefined8
FUN_0107c1e0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 local_res18;
  char local_res20;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_a8;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  local_88 = *(wchar_t **)(param_1 + 0x4cd8);
  local_80 = *(undefined **)(param_1 + 0x4ce0);
  local_78 = *(undefined8 *)(param_1 + 0x4ce8);
  FUN_00416cd0(&local_40,5,*(undefined8 *)(param_1 + 0x4cc8),*(undefined8 *)(param_1 + 0x4cd0));
  if (*(int *)(param_1 + 0xad8) == 8) {
    FUN_00416ad0(&local_40,*(undefined8 *)(param_1 + 0x4cf0));
  }
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_88 = L"\\bin\\xc8.exe\" ";
  FUN_00416cd0(&local_30,3,&DAT_0107c604,*(undefined8 *)(param_1 + 0xb08));
  if (local_res20 != '\0') {
    FUN_00416ad0(&local_30,L"--pass1 ");
  }
  FUN_0107a920(param_1,&local_38,*(undefined8 *)(param_1 + 0xb38));
  local_88 = (wchar_t *)local_38;
  local_80 = &DAT_0107c67c;
  FUN_00416cd0(&local_30,4,local_30,L"--chip=");
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb78) + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0xb78) + 0x18))
                (*(longlong **)(param_1 + 0xb78),&local_58,local_24);
      local_88 = (wchar_t *)local_58;
      local_80 = &DAT_0107c67c;
      FUN_00416cd0(&local_30,4,local_30,&PTR_DAT_0107c68c);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_res20 == '\0') {
    FUN_00416ad0(&local_30,local_40);
    local_88 = (wchar_t *)local_res18;
    local_80 = &DAT_0107c67c;
    FUN_00416cd0(&local_30,4,local_30,&DAT_0107c6b4);
    local_88 = L" ";
    FUN_00416cd0(&local_30,3,local_30,param_5);
  }
  else {
    local_88 = (wchar_t *)local_40;
    FUN_00416cd0(&local_30,3,local_30,&DAT_0107c6a0);
    FUN_004414c0(&local_60,local_res18,&DAT_0107c6c8);
    local_88 = (wchar_t *)local_60;
    local_80 = &DAT_0107c67c;
    FUN_00416cd0(&local_30,4,local_30,&DAT_0107c6b4);
    local_88 = L" ";
    FUN_00416cd0(&local_30,3,local_30,local_res18);
  }
  FUN_00414ad0(param_2,local_30);
  FUN_00410f20(local_20);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_5);
  return param_2;
}

