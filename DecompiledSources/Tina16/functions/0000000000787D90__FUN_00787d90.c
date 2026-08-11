/* Ghidra address: 00787d90 */
/* Ghidra symbol: FUN_00787d90 */


longlong FUN_00787d90(longlong param_1)

{
  undefined8 uVar1;
  longlong local_88;
  undefined8 local_80;
  uint local_74 [4];
  int local_64;
  char local_60;
  char local_5f;
  char local_5e;
  byte local_59;
  undefined1 local_58 [72];
  
  local_80 = 0;
  local_88 = *(longlong *)(param_1 + 8);
  if (local_88 == 0) {
    uVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x18),0x31,0,0);
    local_88 = FUN_005fc570(&PTR_FUN_005f2d40,1);
    FUN_0040d200(local_74,0x5c,0);
    thunk_FUN_03d2c01a(uVar1,0x5c,local_74);
    FUN_00442b00(&local_80,local_58);
    FUN_005fcd80(local_88,local_80);
    FUN_005fcc80(local_88,local_74[0]);
    if (499 < local_64) {
      FUN_005fce70(local_88,*(byte *)(*(longlong *)(local_88 + 0x18) + 0x31) | 1);
    }
    if (local_60 != '\0') {
      FUN_005fce70(local_88,*(byte *)(*(longlong *)(local_88 + 0x18) + 0x31) | 2);
    }
    if (local_5f != '\0') {
      FUN_005fce70(local_88,*(byte *)(*(longlong *)(local_88 + 0x18) + 0x31) | 4);
    }
    if (local_5e != '\0') {
      FUN_005fce70(local_88,*(byte *)(*(longlong *)(local_88 + 0x18) + 0x31) | 8);
    }
    if ((local_59 & 3) == 1) {
      FUN_005fcef0(local_88,2);
    }
    else if ((local_59 & 3) == 2) {
      FUN_005fcef0(local_88,1);
    }
    *(longlong *)(param_1 + 8) = local_88;
  }
  FUN_00414480(&local_80);
  return local_88;
}

