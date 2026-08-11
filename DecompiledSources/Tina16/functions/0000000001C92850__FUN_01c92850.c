/* Ghidra address: 01c92850 */
/* Ghidra symbol: FUN_01c92850 */


void FUN_01c92850(longlong param_1)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  longlong local_18;
  
  local_20 = auStack_e8;
  local_c8 = 0;
  local_c0 = (undefined *)0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0x1c7;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  cVar1 = FUN_01349310(0,2,*(undefined8 *)(param_1 + 0x2788),0);
  if (cVar1 == '\0') {
    local_c8 = PTR_DAT_02004010[0x81a];
    local_c0 = PTR_DAT_02004010 + 1000;
    local_b8 = 0;
    local_b0 = local_b0 & 0xffffffff00000000;
    local_a8 = local_a8 & 0xffffffffffffff00;
    local_18 = FUN_0114dc00(0,*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),
                            *(undefined8 *)(PTR_DAT_02004010 + 0x823),PTR_DAT_02004010[0x819]);
    *(longlong *)PTR_DAT_02001288 = local_18;
    FUN_013d2f60(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),0,0);
    if (local_18 != 0) {
      local_c8 = 0;
      FUN_013d99f0(local_18,PTR_DAT_02004010[0x415],PTR_DAT_02004010[0x413],PTR_DAT_02004010[0x414])
      ;
    }
    FUN_00414ad0(param_1 + 0x27e8,L"FourierSpectrumClick");
  }
  return;
}

