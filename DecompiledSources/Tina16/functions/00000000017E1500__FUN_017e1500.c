/* Ghidra address: 017e1500 */
/* Ghidra symbol: FUN_017e1500 */


void FUN_017e1500(void)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_38 = L"TINA.INI";
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02005010,&DAT_017e1614);
  local_10 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_28);
  uVar1 = (**(code **)(*local_10 + 0x30))
                    (local_10,&DAT_017e1644,L"Enable modifying component values",1);
  *PTR_DAT_02004aa8 = uVar1;
  uVar1 = (**(code **)(*local_10 + 0x30))(local_10,L"designtool",L"Keep cursor pos after run",0);
  *PTR_DAT_02004808 = uVar1;
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  return;
}

