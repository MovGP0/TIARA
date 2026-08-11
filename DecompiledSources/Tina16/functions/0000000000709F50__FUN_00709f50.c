/* Ghidra address: 00709f50 */
/* Ghidra symbol: FUN_00709f50 */


longlong FUN_00709f50(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_28;
  int local_1c [3];
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_008101e0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x22) = 1;
  local_28 = (longlong *)FUN_00777cd0();
  (**(code **)(*local_28 + 0x220))(local_28,local_40,2);
  cVar2 = FUN_007790b0(local_28,local_40,2,local_1c);
  if ((cVar2 == '\0') || (local_1c[0] == 0x1fffffff)) {
    local_1c[0] = FUN_007793c0(local_28,0xff000008);
  }
  if ((*(byte *)(*(longlong *)(local_res8 + 0x10) + 0x2c8) & 1) == 0) {
    *(undefined4 *)(local_res8 + 0x1c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0xb8) + 0x28);
  }
  else {
    *(int *)(local_res8 + 0x1c) = local_1c[0];
  }
  uVar4 = FUN_00777cd0();
  uVar3 = FUN_00779380(uVar4,0x1c);
  FUN_005fdab0(*(undefined8 *)(local_res8 + 8),uVar3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

