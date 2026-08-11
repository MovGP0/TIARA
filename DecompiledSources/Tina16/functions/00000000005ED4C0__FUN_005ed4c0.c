/* Ghidra address: 005ed4c0 */
/* Ghidra symbol: FUN_005ed4c0 */


void FUN_005ed4c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_38 = 0;
  local_30 = FUN_005ebee0(param_1,param_2);
  if (local_30 != 0) {
    local_28 = *(undefined8 *)(param_1 + 8);
    FUN_005ea700(param_1,local_30);
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b3260(param_3);
    FUN_005eb400(param_1,local_20);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_3c = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_38,local_3c);
        FUN_005eb7e0(param_1,&local_58,local_38,1);
        FUN_004b4f10(param_3,local_38,local_58);
        local_3c = local_3c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_004b3390(param_3);
    FUN_00410f20(local_20);
    FUN_005ea700(param_1,local_28);
    thunk_FUN_0418fb4b(local_30);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_38);
  return;
}

