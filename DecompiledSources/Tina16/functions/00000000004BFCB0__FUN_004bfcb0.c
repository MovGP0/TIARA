/* Ghidra address: 004bfcb0 */
/* Ghidra symbol: FUN_004bfcb0 */


longlong * FUN_004bfcb0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auStack_178 [40];
  undefined1 *local_150;
  undefined4 local_12c;
  longlong *local_128;
  longlong local_120;
  undefined4 local_104;
  longlong *local_100;
  longlong local_f8;
  int local_dc;
  longlong local_d8;
  int local_6c;
  longlong *local_68;
  longlong local_60;
  undefined4 local_54;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_150 = auStack_178;
  local_40 = 0;
  local_30 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x50))(param_1,&local_31,&local_54);
  FUN_004c1d80(param_1,&local_40);
  FUN_004c1d80(param_1,&local_30);
  local_48 = param_1[0xb];
  local_50 = param_1[7];
  local_28 = param_2;
  if (param_2 == (longlong *)0x0) {
    if ((local_31 & 1) == 0) {
      FUN_004bf930(auStack_178);
    }
    else {
      FUN_004bfbc0(auStack_178);
    }
  }
  if (local_28 != (longlong *)0x0) {
    FUN_004bf6f0(auStack_178,local_28);
    *(ushort *)((longlong)local_28 + 0x34) = *(ushort *)((longlong)local_28 + 0x34) | 1;
    FUN_004bf7b0(auStack_178,1,1);
    if ((local_31 & 1) == 0) {
      FUN_004bfac0(auStack_178);
    }
    if (local_28 == (longlong *)0x0) {
      FUN_004c0070(0,local_150);
      goto LAB_004c001c;
    }
    if ((*(ushort *)((longlong)local_28 + 0x34) & 0x200) != 0) {
      param_1[7] = (longlong)local_28;
    }
    *(ushort *)((longlong)local_28 + 0x34) = *(ushort *)((longlong)local_28 + 0x34) | 2;
    FUN_004bf7b0(auStack_178,2,1);
    (**(code **)(*local_28 + 0x30))(local_28,param_1);
    *(ushort *)((longlong)local_28 + 0x34) = *(ushort *)((longlong)local_28 + 0x34) & 0xfffd;
    FUN_004bf7b0(auStack_178,2,0);
    if ((local_31 & 2) != 0) {
      lVar1 = param_1[0xb];
      pcVar2 = (code *)FUN_00411550(lVar1,0xfff8);
      (*pcVar2)(lVar1,local_28,local_54);
    }
    if (((local_31 & 1) == 0) && ((*(ushort *)((longlong)local_28 + 0x34) & 0x200) == 0)) {
      FUN_004bf680(auStack_178,local_28);
      local_120 = param_1[0xd];
      local_128 = local_28;
      local_12c = FUN_00597e50(local_120 + 8,&local_128);
    }
    else {
      local_60 = param_1[0xd];
      local_68 = local_28;
      local_d8 = local_60 + 8;
      local_dc = FUN_00596a10(local_d8,&local_68);
      local_6c = local_dc;
      if (local_dc < 0) {
        FUN_004bf680(auStack_178,local_28);
        local_f8 = param_1[0xd];
        local_100 = local_28;
        local_104 = FUN_00597e50(local_f8 + 8,&local_100);
      }
    }
  }
  param_1[0xb] = local_48;
  param_1[7] = local_50;
LAB_004c001c:
  FUN_00414480(&local_40);
  FUN_00414480(&local_30);
  FUN_00419430(&local_20,&DAT_004bf640);
  return local_28;
}

