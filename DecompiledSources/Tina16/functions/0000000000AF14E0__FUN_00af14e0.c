/* Ghidra address: 00af14e0 */
/* Ghidra symbol: FUN_00af14e0 */


void FUN_00af14e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_59;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_98;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_00414480(&local_28);
  uVar2 = FUN_00414480(&local_30);
  FUN_00a28910(param_3,uVar1,uVar2);
  if (local_28 == 0) {
    FUN_00414b50(&local_28,L"res:///");
  }
  local_59 = param_4;
  local_20 = FUN_00a7cbc0(&LAB_00a7c208,param_2,local_30,param_4);
  if (local_20 == 0) {
    local_50 = 0x11;
    local_78 = 0;
    local_58 = param_3;
    uVar1 = FUN_0044d530(&PTR_FUN_00ae7db8,1,L"Can\'t locate resource \'%s\'.",&local_58);
    FUN_004134c0(uVar1);
  }
  else {
    FUN_00416ba0(&local_48,local_28,local_30);
    FUN_00af18a0(param_1,local_48,local_20,local_59);
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,2);
  return;
}

