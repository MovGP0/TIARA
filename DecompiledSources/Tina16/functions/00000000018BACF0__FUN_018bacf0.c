/* Ghidra address: 018bacf0 */
/* Ghidra symbol: FUN_018bacf0 */


void FUN_018bacf0(longlong param_1,double param_2,double param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  double local_28;
  double local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = param_3;
  uVar2 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"cutted");
  iVar1 = FUN_01803a10(uVar2);
  if (0 < iVar1) {
    uVar3 = FUN_018039f0(uVar2,0);
    FUN_01803cc0(uVar3,&local_30,&DAT_018baf34);
    if (local_30 == 0) {
      local_20 = 0.0;
    }
    else {
      uVar3 = FUN_018039f0(uVar2,0);
      FUN_01803cc0(uVar3,&local_38,&DAT_018baf34);
      local_20 = (double)FUN_0180d800(local_38);
    }
    local_20 = local_58 - local_20;
    lVar4 = FUN_018039f0(uVar2,0);
    iVar1 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x20),L"TfrxNullBand");
    if (((iVar1 == 0) && (local_20 < 0.0)) && (local_58 == 0.0)) {
      local_20 = 0.0;
    }
    uVar3 = FUN_018039f0(uVar2,0);
    FUN_01803cc0(uVar3,&local_40,&DAT_018baf6c);
    if (local_40 == 0) {
      local_28 = 0.0;
    }
    else {
      uVar3 = FUN_018039f0(uVar2,0);
      FUN_01803cc0(uVar3,&local_48,&DAT_018baf6c);
      local_28 = (double)FUN_0180d800(local_48);
    }
    local_28 = local_50 - local_28;
    while (iVar1 = FUN_01803a10(uVar2), 0 < iVar1) {
      uVar3 = FUN_018039f0(uVar2,0);
      FUN_018bab00(auStack_88,uVar3);
      uVar3 = FUN_018039f0(uVar2,0);
      FUN_018bac00(auStack_88,uVar3);
      puVar5 = (undefined8 *)FUN_018b8410(local_60);
      FUN_018039f0(uVar2,0);
      (**(code **)*puVar5)(puVar5);
    }
  }
  FUN_00410f20(uVar2);
  FUN_00414560(&local_48,4);
  return;
}

