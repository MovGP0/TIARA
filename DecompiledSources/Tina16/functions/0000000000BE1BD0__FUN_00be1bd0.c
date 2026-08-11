/* Ghidra address: 00be1bd0 */
/* Ghidra symbol: FUN_00be1bd0 */


void FUN_00be1bd0(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 local_34;
  longlong *local_30;
  
  local_b0 = auStack_d8;
  local_50 = *(longlong *)(param_1 + 0x18);
  FUN_00597fe0(local_50 + 8);
  local_58 = *(undefined8 *)(param_1 + 0x10);
  local_30 = (longlong *)FUN_00be3410(&PTR_FUN_00bdc8b0,1,local_58);
  while( true ) {
    local_60 = local_30;
    *(int *)(local_30 + 2) = (int)local_30[2] + 1;
    if (*(int *)(local_30[1] + 0x10) <= (int)local_30[2]) break;
    local_80 = local_30[1];
    puVar1 = (undefined8 *)(*(longlong *)(local_80 + 8) + (longlong)(int)local_30[2] * 0x14);
    local_74 = *puVar1;
    uStack_6c = puVar1[1];
    uStack_64 = *(undefined4 *)(puVar1 + 2);
    local_34._0_1_ = (char)uStack_64;
    bVar2 = (char)local_34 != '\0';
    local_44 = local_74;
    uStack_3c = uStack_6c;
    local_34 = uStack_64;
    if (bVar2) {
      local_88 = *(longlong *)(param_1 + 0x18);
      local_44._0_4_ = (undefined4)local_74;
      local_8c = (undefined4)local_44;
      local_90 = FUN_00597de0(local_88 + 8,&local_8c);
    }
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + -0x20))(local_30,1);
  }
  return;
}

