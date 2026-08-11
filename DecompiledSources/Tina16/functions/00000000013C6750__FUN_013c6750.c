/* Ghidra address: 013c6750 */
/* Ghidra symbol: FUN_013c6750 */


longlong *
FUN_013c6750(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
            undefined8 param_5,undefined1 param_6,undefined8 param_7,wchar_t *param_8,char param_9)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *local_70;
  undefined1 local_68;
  wchar_t *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20 = 0;
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_013c5e90(param_1,param_2,param_3,param_7,param_6,param_4);
  iVar2 = (**(code **)(*param_2 + 0xb0))(param_2,param_8);
  lVar4 = FUN_013c5cf0(param_1,param_8,local_24);
  if (lVar4 == 0) {
    local_40 = param_8;
    local_38 = 0x11;
    FUN_00442f70(&local_30,L"Curve not found: %s",&local_40,0);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30);
    FUN_004134c0(uVar5);
  }
  if (iVar2 < 0) {
    FUN_0041ddd0(&local_48,PTR_PTR_020054a0);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar5);
  }
  (**(code **)(*plVar3 + 0x88))(plVar3,param_5);
  cVar1 = FUN_01b22900(plVar3,L"tina_postp\\.SelectCurve\\(\'(.)*\'\\)",&local_28);
  if (cVar1 == '\0') {
    local_40 = L"tina_postp.SelectCurve";
    local_38 = 0x11;
    FUN_00442f70(&local_50,L"Line containing \'%s\' not found in the source file!",&local_40,0);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_50);
    FUN_004134c0(uVar5);
  }
  if (param_9 != '\0') {
    local_70 = L"tina_postp.SelectCurve";
    local_68 = 0x11;
    local_60 = param_8;
    local_58 = 0x11;
    FUN_00442f70(&local_20,L"[Result_Idx, Idx] = %s(\'%s\')",&local_70,1);
    (**(code **)(*plVar3 + 0x40))(plVar3,local_28,local_20);
  }
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  FUN_00414560(&param_7,2);
  return plVar3;
}

