/* Ghidra address: 01a4cb70 */
/* Ghidra symbol: FUN_01a4cb70 */


void FUN_01a4cb70(longlong param_1)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x910) + 0x90))(*(longlong **)(param_1 + 0x910));
  FUN_00416ba0(local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\Design Tool");
  FUN_00416ba0(&local_68,local_30[0],L"\\*.tsc");
  local_20 = (longlong *)FUN_01603790(local_68,0x20);
  iVar1 = (**(code **)(*local_20 + 0x28))();
  local_44 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_38,local_44);
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x78))
                (*(longlong **)(param_1 + 0x910),local_38);
      local_44 = local_44 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_68);
  FUN_00414560(&local_40,3);
  return;
}

