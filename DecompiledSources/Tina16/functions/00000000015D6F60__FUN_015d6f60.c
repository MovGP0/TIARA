/* Ghidra address: 015d6f60 */
/* Ghidra symbol: FUN_015d6f60 */


void FUN_015d6f60(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c0 [4];
  uint local_9a;
  undefined1 *local_30;
  undefined8 local_20;
  
  puVar2 = local_c0;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_30 = auStack_f8;
  FUN_015c29e0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28),local_c0,param_2);
  if ((local_9a & 0x10) == 0) {
    local_20 = FUN_00410e60(&PTR_FUN_015bee00,1);
    local_d8 = 0;
    FUN_015d3670(param_1,param_2,local_20,0);
    FUN_00410f20(local_20);
  }
  FUN_00417740(local_c0,&DAT_015b9418);
  return;
}

