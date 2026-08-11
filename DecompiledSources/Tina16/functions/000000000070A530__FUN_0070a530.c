/* Ghidra address: 0070a530 */
/* Ghidra symbol: FUN_0070a530 */


longlong * FUN_0070a530(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_res8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  longlong *local_38;
  undefined1 *local_30;
  longlong *local_28;
  int local_1c [3];
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_008101e0(local_res8,0,param_3);
  *(undefined1 *)((longlong)local_res8 + 0x22) = 1;
  local_38 = local_res8;
  local_40 = *(undefined8 *)(*local_res8 + 0xb0);
  lVar4 = FUN_004d6210(&local_40);
  local_res8[0x10] = lVar4;
  *(undefined4 *)(local_res8 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)local_res8 + 0x94) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x13) = 0xffffffff;
  local_res8[0xf] = 0;
  local_28 = (longlong *)FUN_00777cd0();
  (**(code **)(*local_28 + 0x220))(local_28,local_50,2);
  cVar2 = FUN_007790b0(local_28,local_50,2,local_1c);
  if ((cVar2 == '\0') || (local_1c[0] == 0x1fffffff)) {
    local_1c[0] = FUN_007793c0(local_28,0xff000008);
  }
  if ((*(byte *)(local_res8[2] + 0x2c8) & 1) == 0) {
    *(undefined4 *)((longlong)local_res8 + 0x1c) =
         *(undefined4 *)(*(longlong *)(local_res8[2] + 0xb8) + 0x28);
  }
  else {
    *(int *)((longlong)local_res8 + 0x1c) = local_1c[0];
  }
  if ((*(byte *)(local_res8[2] + 0x2c8) & 2) == 0) {
    FUN_005fdab0(local_res8[1],*(undefined4 *)(local_res8[2] + 200));
  }
  else {
    uVar5 = FUN_00777cd0();
    uVar3 = FUN_00779380(uVar5,0x16);
    FUN_005fdab0(local_res8[1],uVar3);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

