/* Ghidra address: 015cdcc0 */
/* Ghidra symbol: FUN_015cdcc0 */


void FUN_015cdcc0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_1e0 [5];
  uint local_1b6;
  undefined8 local_150 [12];
  ulonglong local_f0;
  undefined8 local_c0 [5];
  int local_96;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  puVar3 = local_1e0;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_150;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_c0;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_30 = 0;
  FUN_015d55a0(*(undefined8 *)(param_1 + 0xee0),&local_30);
  FUN_00414b50(param_1 + 0xeb0,local_30);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0xeb0),0xff00);
  *(undefined8 *)(param_1 + 0xea8) = uVar1;
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20),
               local_c0,param_2);
  if (local_96 == -1) {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20),
                 local_150,param_2);
    local_20 = local_f0;
  }
  else {
    FUN_015c29e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xee0) + 0x238) + 0x20),
                 local_1e0,param_2);
    local_20 = (ulonglong)local_1b6;
  }
  local_28 = *(longlong **)(*(longlong *)(param_1 + 0xee0) + 0x250);
  (**(code **)(*local_28 + 0x50))(local_28,local_20,0);
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0xee0) + 0x250);
  lVar2 = (**(code **)*puVar3)(puVar3);
  FUN_004b8ba0(*(undefined8 *)(param_1 + 0xea8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x250),lVar2 - local_20);
  FUN_00417840(local_1e0,&DAT_015b9418,3);
  FUN_00414480(&local_30);
  return;
}

