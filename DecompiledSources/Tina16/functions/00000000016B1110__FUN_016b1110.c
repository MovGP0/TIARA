/* Ghidra address: 016b1110 */
/* Ghidra symbol: FUN_016b1110 */


void FUN_016b1110(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 2) != 0) {
    FUN_016b1110(param_1,*(longlong *)(param_2 + 2));
  }
  if (*(longlong *)(param_2 + 4) != 0) {
    FUN_016b1110(param_1,*(longlong *)(param_2 + 4));
  }
  if (*(longlong *)(param_2 + 2) != 0) {
    plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_016b0ee0(param_1,local_20,*(undefined8 *)(param_2 + 2),local_38);
    FUN_00416880(&local_50,local_20[0]);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_50);
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_016b0ee0(param_1,&local_28,*(longlong *)(param_2 + 4),local_40);
      FUN_00416880(&local_58,local_28);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
    }
    FUN_016b0ee0(param_1,&local_30,param_2,local_48);
    FUN_00416880(&local_60,local_30);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_60);
    lVar2 = FUN_016b0320(&DAT_016afe50,1,*param_2,plVar1);
    *(longlong *)(lVar2 + 0x18) = param_1;
    FUN_016b0590(lVar2,local_38);
    if (*(longlong *)(param_2 + 4) != 0) {
      FUN_016b0590(lVar2,local_40);
    }
    FUN_016b0590(lVar2,local_48);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),lVar2);
  }
  FUN_00414560(&local_60,3);
  FUN_00414590(&local_30,3);
  return;
}

