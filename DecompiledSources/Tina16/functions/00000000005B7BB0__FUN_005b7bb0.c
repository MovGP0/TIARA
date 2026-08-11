/* Ghidra address: 005b7bb0 */
/* Ghidra symbol: FUN_005b7bb0 */


undefined4 FUN_005b7bb0(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 auStack_68 [38];
  ushort local_42;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  char local_11;
  ushort *local_10;
  
  local_10 = (ushort *)FUN_00416740(param_2);
  local_38 = 0;
  local_3c = 0;
  FUN_005b7870(auStack_68);
  for (; uVar1 = *local_10, uVar1 != 0; local_10 = local_10 + 1) {
    if (uVar1 == 0x2a) {
      local_11 = '\x01';
    }
    else if (uVar1 == 0x3f) {
      if (local_11 == '\0') {
        FUN_005b78a0(auStack_68,1);
      }
    }
    else if (uVar1 == 0x5b) {
      FUN_005b7a20(auStack_68);
    }
    else if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      local_3e = *local_10;
      FUN_005b78a0(auStack_68,0);
    }
    else {
      local_40 = *local_10;
      local_10 = local_10 + 1;
      local_42 = *local_10;
      FUN_005b78a0(auStack_68,3);
    }
  }
  local_3e = 0;
  FUN_005b78a0(auStack_68,0);
  return local_38;
}

