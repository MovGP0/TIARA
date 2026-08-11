/* Ghidra address: 004c0450 */
/* Ghidra symbol: FUN_004c0450 */


undefined8 FUN_004c0450(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_20 = 0;
  local_10 = 0;
  bVar1 = FUN_004c23c0(param_1);
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      FUN_00414ad0(param_2,L"False");
      goto code_r0x004c05dc;
    }
    if (bVar1 == 0) {
      FUN_00414ad0(param_2,L"Null");
      goto code_r0x004c05dc;
    }
    if (bVar1 == 7) {
      FUN_004bea90(param_1,&local_11,1);
      FUN_00419260(&local_20,&DAT_00406578,1,local_11);
      FUN_004bec10(param_1,local_20,local_11);
      FUN_00414480(&local_10);
      local_28 = FUN_0045ae90();
      local_30 = local_20;
      if (local_20 != 0) {
        local_30 = *(longlong *)(local_20 + -8);
      }
      local_58 = (undefined4)local_30;
      FUN_0045aba0(local_28,&local_10,local_20,0);
      FUN_00414ad0(param_2,local_10);
      FUN_00414480(&local_10);
      goto code_r0x004c05dc;
    }
  }
  else {
    if (bVar1 == 9) {
      FUN_00414ad0(param_2,L"True");
      goto code_r0x004c05dc;
    }
    if (bVar1 == 0xd) {
      FUN_00414ad0(param_2,&DAT_004c0698);
      goto code_r0x004c05dc;
    }
  }
  FUN_004bdee0();
code_r0x004c05dc:
  FUN_00419430(&local_20,&DAT_00406578);
  FUN_00414480(&local_10);
  return param_2;
}

