/* Ghidra address: 00ccba20 */
/* Ghidra symbol: FUN_00ccba20 */


uint FUN_00ccba20(uint param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_res8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  longlong *local_60;
  undefined1 local_51;
  undefined4 local_50;
  int local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  uint local_30;
  char local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_60 = (longlong *)0x0;
  (**(code **)*DAT_01eadbc8)(DAT_01eadbc8);
  local_29 = '\x01';
  local_40 = FUN_00ca5400(param_2);
  if (local_40 == 0) {
    local_30 = param_1;
    FUN_00ccbc50(0,local_70);
  }
  else {
    local_38 = (**(code **)PTR_DAT_02003978)(param_2);
    local_28 = FUN_00cd2cb0(&PTR_FUN_00cc9b60,1,local_38,0);
    local_48 = FUN_00ca5370(local_40);
    local_50 = (**(code **)PTR_DAT_02004450)(param_2);
    local_4c = (**(code **)PTR_DAT_02002218)(param_2);
    if (((int)param_1 < 1) ||
       (local_res8 = param_1, *(int *)(*(longlong *)(local_48 + 0x28) + 0x30) < local_4c)) {
      local_res8 = 0;
    }
    local_51 = local_res8 == 1;
    uVar2 = FUN_0041b800(&local_60);
    cVar1 = FUN_00452370(*(undefined8 *)(local_48 + 8),&DAT_00ccbc98,uVar2);
    if (cVar1 != '\0') {
      local_88 = local_50;
      local_29 = (**(code **)(*local_60 + 0x28))(local_60,local_28,local_51,local_4c);
      FUN_0041b800(&local_60);
    }
    uVar2 = local_28;
    local_20 = local_28;
    local_28 = 0;
    FUN_00410f20(uVar2);
    local_30 = (uint)(local_29 != '\0');
    (**(code **)(*DAT_01eadbc8 + 8))(DAT_01eadbc8);
  }
  FUN_0041b800(&local_60);
  return local_30;
}

