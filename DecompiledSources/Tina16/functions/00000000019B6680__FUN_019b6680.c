/* Ghidra address: 019b6680 */
/* Ghidra symbol: FUN_019b6680 */


undefined1 FUN_019b6680(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_98;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_29 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_78 = L"TINA.INI";
  FUN_00416cd0(&local_58,3,*(undefined8 *)PTR_DAT_02005010,&DAT_019b68a8);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_58);
  (**(code **)(*local_20 + 0x90))(local_20,L"Equation Editor Autoformat",local_28);
  iVar1 = (**(code **)(*local_28 + 0x28))(local_28);
  local_30 = 1;
  if (0 < iVar1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_68,local_30 + -1);
      local_78 = (wchar_t *)0x0;
      (**(code **)(*local_20 + 0x10))(local_20,&local_60,L"Equation Editor Autoformat",local_68);
      FUN_019b6ae0(local_60,L"XXTOXX",&local_38,&local_40);
      iVar2 = FUN_00416db0(local_38,local_res8[0]);
      if (iVar2 == 0) {
        local_29 = 1;
      }
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res8);
  return local_29;
}

