/* Ghidra address: 00ccb520 */
/* Ghidra symbol: FUN_00ccb520 */


undefined4 FUN_00ccb520(longlong param_1,int param_2,int param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_60 = auStack_88;
  local_68 = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_40 = (longlong *)0x0;
  local_1c = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x80))(*(longlong **)PTR_DAT_020050b0);
  (**(code **)*DAT_01eadbc0)(DAT_01eadbc0);
  FUN_00414480(&local_28);
  local_38 = param_4;
  uVar2 = FUN_0041b800(&local_40);
  cVar1 = FUN_00452370(*(undefined8 *)(local_38 + 0x60),&DAT_00ccb7d0,uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*local_40 + 0x18))(local_40,&local_28,0 < param_3);
    FUN_0041b800(&local_40);
  }
  FUN_0040d200(param_1,(longlong)param_2,0);
  FUN_00874450(&local_68);
  (**(code **)(*local_68 + 0x70))(local_68,&local_30,local_28);
  local_48 = local_30;
  if (local_30 != 0) {
    local_48 = *(longlong *)(local_30 + -8);
  }
  if (0 < local_48) {
    local_50 = local_30;
    if (local_30 != 0) {
      local_50 = *(longlong *)(local_30 + -8);
    }
    uVar2 = FUN_008764e0(local_50,(longlong)param_2);
    FUN_00409a70(local_30,param_1,uVar2);
  }
  local_58 = local_30;
  if (local_30 != 0) {
    local_58 = *(longlong *)(local_30 + -8);
  }
  local_20 = (undefined4)local_58;
  *(undefined1 *)(param_1 + (param_2 + -1)) = 0;
  (**(code **)(*DAT_01eadbc0 + 8))(DAT_01eadbc0);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x88))(*(longlong **)PTR_DAT_020050b0,local_1c);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_40);
  FUN_00419430(&local_30,&DAT_0086e978);
  FUN_00414480(&local_28);
  return local_20;
}

