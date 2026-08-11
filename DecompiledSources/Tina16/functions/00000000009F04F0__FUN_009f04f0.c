/* Ghidra address: 009f04f0 */
/* Ghidra symbol: FUN_009f04f0 */


undefined2 FUN_009f04f0(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  undefined1 auStack_38 [40];
  uint local_10;
  undefined2 local_c;
  
  uVar2 = FUN_00a01900(param_1);
  local_10 = (uint)uVar2;
  if (local_10 < 0xf0) {
    if (local_10 < 0x80) goto LAB_009f06e1;
    if (local_10 - 0xc0 < 0x20) {
      local_10 = local_10 & 0x1f;
      local_c = 0;
      cVar1 = FUN_009f0450(auStack_38);
      if (cVar1 == '\0') {
        FUN_009f04b0(auStack_38);
      }
      goto LAB_009f06e1;
    }
    if (local_10 - 0xe0 < 0x10) {
      local_10 = local_10 & 0xf;
      local_c = 0;
      cVar1 = FUN_009f0450(auStack_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_009f0450(auStack_38);
        if (cVar1 != '\0') goto LAB_009f06e1;
      }
      FUN_009f04b0(auStack_38);
      goto LAB_009f06e1;
    }
  }
  else {
    if (local_10 - 0xf0 < 8) {
      local_10 = local_10 & 7;
      local_c = 0;
      cVar1 = FUN_009f0450(auStack_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_009f0450(auStack_38);
        if (cVar1 != '\0') {
          cVar1 = FUN_009f0450(auStack_38);
          if (cVar1 != '\0') {
            if (DAT_01e6d70c < local_10) {
              local_10 = DAT_01e6d70c;
            }
            goto LAB_009f06e1;
          }
        }
      }
      FUN_009f04b0(auStack_38);
      goto LAB_009f06e1;
    }
    if (local_10 - 0xf8 < 4) {
      local_10 = local_10 & 3;
      local_c = 0;
      cVar1 = FUN_009f0450(auStack_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_009f0450(auStack_38);
        if (cVar1 != '\0') {
          cVar1 = FUN_009f0450(auStack_38);
          if (cVar1 != '\0') {
            cVar1 = FUN_009f0450(auStack_38);
            if (cVar1 != '\0') {
              if (DAT_01e6d70c < local_10) {
                local_10 = DAT_01e6d70c;
              }
              goto LAB_009f06e1;
            }
          }
        }
      }
      FUN_009f04b0(auStack_38);
      goto LAB_009f06e1;
    }
    if (local_10 - 0xfc < 2) {
      local_10 = local_10 & 1;
      local_c = 0;
      cVar1 = FUN_009f0450(auStack_38);
      if (cVar1 != '\0') {
        cVar1 = FUN_009f0450(auStack_38);
        if (cVar1 != '\0') {
          cVar1 = FUN_009f0450(auStack_38);
          if (cVar1 != '\0') {
            cVar1 = FUN_009f0450(auStack_38);
            if (cVar1 != '\0') {
              cVar1 = FUN_009f0450(auStack_38);
              if (cVar1 != '\0') {
                if (DAT_01e6d70c < local_10) {
                  local_10 = DAT_01e6d70c;
                }
                goto LAB_009f06e1;
              }
            }
          }
        }
      }
      FUN_009f04b0(auStack_38);
      goto LAB_009f06e1;
    }
  }
  local_10 = DAT_01e6d70c;
LAB_009f06e1:
  return (undefined2)local_10;
}

