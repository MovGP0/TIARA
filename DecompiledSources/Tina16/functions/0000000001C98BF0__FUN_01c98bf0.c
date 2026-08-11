/* Ghidra address: 01c98bf0 */
/* Ghidra symbol: FUN_01c98bf0 */


void FUN_01c98bf0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_28 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02005010,&DAT_01c98df4);
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_019d2608,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    FUN_01c77470(param_1,1);
    uVar2 = FUN_019a4600();
    local_18 = FUN_0123b660(&DAT_0123a310,1,local_28,uVar2);
    FUN_0123b940(local_18);
    FUN_0123ba50(local_18,local_20[0x299]);
    FUN_0123bc40(local_18);
    local_58 = L"filter_settings.xml";
    FUN_00416cd0(&local_48,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c98df4);
    FUN_019d45b0(local_20,local_48);
  }
  FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
  if (local_18 != 0) {
    FUN_00410f20(local_18);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  FUN_00414480(&local_28);
  return;
}

