/* Ghidra address: 00d9d260 */
/* Ghidra symbol: FUN_00d9d260 */


undefined1
FUN_00d9d260(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,byte param_5,
            undefined8 param_6)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_19 = 1;
  local_10 = *(undefined8 *)(param_2 + 0x180);
  local_18 = FUN_0060f770(&DAT_005faf70,1,param_3,6);
  uVar1 = (ulonglong)param_5;
  if (uVar1 < 0x1e) {
    if (uVar1 == 0x1d) {
      FUN_00d9cfc0(auStack_58,1,0,1);
      goto code_r0x00d9d651;
    }
    if (uVar1 < 0x14) {
      if (uVar1 == 0x13) {
        FUN_00d9d1f0(auStack_58,1);
        goto code_r0x00d9d651;
      }
      if (uVar1 < 0xf) {
        if (uVar1 == 0xe) {
          FUN_00d9cfc0(auStack_58,0,0,2);
          goto code_r0x00d9d651;
        }
        if (uVar1 - 10 < 2) {
          FUN_00d9d1f0(auStack_58,0);
          goto code_r0x00d9d651;
        }
        if (uVar1 == 0xc) {
          FUN_00d9cfc0(auStack_58,0,0,0);
          goto code_r0x00d9d651;
        }
        if (uVar1 == 0xd) {
          FUN_00d9cfc0(auStack_58,0,0,1);
          goto code_r0x00d9d651;
        }
      }
      else {
        if (uVar1 - 0xf < 3) {
          FUN_00d9cfc0(auStack_58,0,0,3);
          goto code_r0x00d9d651;
        }
        if (uVar1 - 0xf == 3) {
          FUN_004234c0(param_6,2,2);
          FUN_00d9d1f0(auStack_58,1);
          goto code_r0x00d9d651;
        }
      }
    }
    else if (uVar1 < 0x18) {
      if (uVar1 == 0x17) {
        FUN_00d9d150(auStack_58,3,1);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x14) {
        FUN_00d9d150(auStack_58,0,0);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x15) {
        FUN_00d9d150(auStack_58,3,0);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x16) {
        FUN_00d9d150(auStack_58,0,1);
        goto code_r0x00d9d651;
      }
    }
    else {
      if (uVar1 - 0x18 < 4) goto code_r0x00d9d651;
      if (uVar1 - 0x18 == 4) {
        FUN_00d9cfc0(auStack_58,1,0,0);
        goto code_r0x00d9d651;
      }
    }
  }
  else if (uVar1 < 0x26) {
    if (uVar1 == 0x25) {
      FUN_00d9d150(auStack_58,0,7);
      goto code_r0x00d9d651;
    }
    if (uVar1 < 0x23) {
      if (uVar1 == 0x22) {
        FUN_00d9d150(auStack_58,3,2);
        goto code_r0x00d9d651;
      }
      if (uVar1 - 0x1e < 2) {
        FUN_00d9cfc0(auStack_58,1,0,3);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x20) {
        FUN_00d9cfc0(auStack_58,1,1,0);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x21) {
        FUN_00d9d150(auStack_58,0,2);
        goto code_r0x00d9d651;
      }
    }
    else {
      if (uVar1 == 0x23) {
        FUN_00d9d150(auStack_58,0,5);
        goto code_r0x00d9d651;
      }
      if (uVar1 == 0x24) {
        FUN_00d9d150(auStack_58,3,5);
        goto code_r0x00d9d651;
      }
    }
  }
  else if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      FUN_00d9d150(auStack_58,3,6);
      goto code_r0x00d9d651;
    }
    if (uVar1 == 0x26) {
      FUN_00d9d150(auStack_58,3,7);
      goto code_r0x00d9d651;
    }
    if (uVar1 == 0x27) {
      FUN_00d9d150(auStack_58,0,6);
      goto code_r0x00d9d651;
    }
  }
  else {
    if (uVar1 == 0x29) {
      FUN_00d9d150(auStack_58,0,10);
      goto code_r0x00d9d651;
    }
    if (uVar1 == 0x2a) {
      FUN_00d9d150(auStack_58,3,10);
      goto code_r0x00d9d651;
    }
  }
  local_19 = 0;
code_r0x00d9d651:
  FUN_00410f20(local_18);
  return local_19;
}

