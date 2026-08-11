/* Ghidra address: 00b896a0 */
/* Ghidra symbol: FUN_00b896a0 */


void FUN_00b896a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_108 [160];
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_30;
  undefined4 local_28;
  
  local_68 = 0x50;
  local_64 = 0x10;
  local_30 = local_108;
  local_28 = 0x50;
  uVar1 = FUN_007de060(param_2);
  thunk_FUN_0410b804(uVar1,0,0xffffffff,&local_68);
  if (*(char *)(param_1 + 0x2e) == '\0') {
    local_64 = 0x10;
    local_60 = local_60 & 0xffffdfff | 0xffffbfff;
  }
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    local_64 = 0x10;
    local_60 = local_60 | 0x6000;
  }
  uVar1 = FUN_007de060(param_2);
  thunk_FUN_03ce555e(uVar1,0,0xffffffff,&local_68);
  return;
}

