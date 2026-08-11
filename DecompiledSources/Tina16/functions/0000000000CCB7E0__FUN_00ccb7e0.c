/* Ghidra address: 00ccb7e0 */
/* Ghidra symbol: FUN_00ccb7e0 */


void FUN_00ccb7e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_1c;
  
  local_40 = auStack_98;
  local_48 = 0;
  local_60 = 0;
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_1c = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x80))(*(longlong **)PTR_DAT_020050b0);
  (**(code **)*DAT_01eadbb8)(DAT_01eadbb8);
  local_28 = FUN_00ca5370(param_1);
  uVar2 = FUN_0041b800(&local_38);
  cVar1 = FUN_00452370(*(undefined8 *)(local_28 + 8),&DAT_00ccba08,uVar2);
  if (cVar1 != '\0') {
    FUN_0041ddd0(&local_48,PTR_PTR_02003368);
    uVar2 = (**(code **)PTR_DAT_02001f78)(param_1);
    FUN_004167a0(&local_60,uVar2);
    local_58 = local_60;
    local_50 = 0x11;
    FUN_00876cf0(&local_30,local_48,&local_58,0);
    local_78 = local_30;
    (**(code **)(*local_38 + 0x20))(local_38,param_1,param_2,param_3);
    FUN_0041b800(&local_38);
  }
  (**(code **)(*DAT_01eadbb8 + 8))(DAT_01eadbb8);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x88))(*(longlong **)PTR_DAT_020050b0,local_1c);
  FUN_00414480(&local_60);
  FUN_00414480(&local_48);
  FUN_0041b800(&local_38);
  FUN_00414480(&local_30);
  return;
}

