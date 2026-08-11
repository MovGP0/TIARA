/* Ghidra address: 014db770 */
/* Ghidra symbol: FUN_014db770 */


bool FUN_014db770(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool local_129;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_004169a0(local_20,param_1 + 0x30);
  iVar1 = FUN_004170c0(&DAT_014db90c,local_20[0],1);
  if (iVar1 == 0) {
    iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),param_1 + 0x30,
                         (ulonglong)**(byte **)(param_2 + 8) + 1);
    local_129 = iVar1 == 0;
  }
  else {
    FUN_004169a0(&local_28,param_1 + 0x30);
    uVar2 = FUN_004170c0(&DAT_014db90c,local_28,1);
    FUN_004151b0(local_128,param_1 + 0x30,1,(uVar2 & 0xff) - 1);
    iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),local_128,
                         (ulonglong)**(byte **)(param_2 + 8) + 1);
    if (iVar1 != 0) {
      FUN_004151b0(local_128,param_1 + 0x30,(uVar2 & 0xff) + 1,*(undefined1 *)(param_1 + 0x30));
      iVar1 = FUN_00414f50(*(undefined8 *)(param_2 + 8),local_128,
                           (ulonglong)**(byte **)(param_2 + 8) + 1);
      if (iVar1 != 0) {
        local_129 = false;
        goto code_r0x014db8b6;
      }
    }
    local_129 = true;
  }
code_r0x014db8b6:
  FUN_00414560(&local_28,2);
  return local_129;
}

