/* Ghidra address: 016b05d0 */
/* Ghidra symbol: FUN_016b05d0 */


undefined8 FUN_016b05d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  lVar1 = *param_3;
  local_20._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uVar3 = local_20._4_4_;
  local_20 = lVar1;
  if (lVar1 < 0) {
    FUN_00414480(param_2);
  }
  else {
    local_20._0_4_ = (int)lVar1;
    if ((int)local_20 == 1) {
      FUN_0043f750(&local_30,uVar3);
      FUN_00416cd0(&local_28,3,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x70),&DAT_016b06f8,
                   local_30);
    }
    else if ((int)local_20 == 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x48);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,uVar3);
    }
    else if ((int)local_20 == 2) {
      FUN_00414b50(&local_28,L"PSG_0");
    }
    else {
      bVar4 = (int)local_20 == 3;
      if (bVar4) {
        FUN_00414b50(&local_28,L"PSG_1");
      }
    }
    FUN_00414ad0(param_2,local_28);
  }
  FUN_00414560(&local_30,2);
  return param_2;
}

