/* Ghidra address: 00af0810 */
/* Ghidra symbol: FUN_00af0810 */


void FUN_00af0810(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00409a00();
  uVar2 = FUN_00414480(&local_30);
  uVar3 = FUN_00414480(&local_28);
  FUN_00a289e0(param_2,uVar2,uVar3);
  if (local_30 != 0) {
    FUN_00441b80(&local_48,local_30);
    FUN_00414b50(&local_30,local_48);
  }
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 == '\0') {
    local_58 = local_30;
    local_50 = 0x11;
    local_78 = 0;
    uVar2 = FUN_0044d530(&PTR_FUN_00ae7db8,1,L"Can\'t locate file \'%s\'.",&local_58);
    FUN_004134c0(uVar2);
  }
  FUN_009ec440(&local_60,local_30);
  local_20 = FUN_004b9860(&PTR_FUN_0047c498,1,local_60,0x20);
  FUN_00416ba0(&local_68,local_30,local_28);
  FUN_00af18a0(param_1,local_68,local_20,param_3);
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,2);
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,2);
  return;
}

