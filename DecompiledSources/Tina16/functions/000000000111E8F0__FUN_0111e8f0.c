/* Ghidra address: 0111e8f0 */
/* Ghidra symbol: FUN_0111e8f0 */


void FUN_0111e8f0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  cVar1 = *(char *)(param_1 + 0x162);
  if (cVar1 == '\x03') {
    FUN_0111e680(param_1,0x27);
    goto LAB_0111ebf3;
  }
  if (cVar1 == '\x04') {
    FUN_0111e680(param_1,0x22);
    goto LAB_0111ebf3;
  }
  if (cVar1 == '\x05') {
    FUN_0111e680(param_1,*(undefined2 *)(param_1 + 0x160));
    goto LAB_0111ebf3;
  }
  uVar2 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (0x3c < uVar2) {
    if (uVar2 < 0x60) {
      if (uVar2 != 0x5f) {
        if (uVar2 < 0x53) {
          if (uVar2 != 0x3d) {
            if (uVar2 == 0x3e) {
              FUN_0111d160(param_1);
              goto LAB_0111ebf3;
            }
            uVar2 = uVar2 - 0x41;
            goto joined_r0x0111eb16;
          }
          goto LAB_0111eb59;
        }
        if (1 < uVar2 - 0x53) {
          if (uVar2 == 0x55) goto LAB_0111ebcd;
          if (4 < uVar2 - 0x56) {
            uVar2 = uVar2 - 0x5b;
            goto joined_r0x0111eb53;
          }
        }
      }
    }
    else if (uVar2 < 0x73) {
      if (uVar2 == 0x60) goto LAB_0111eb59;
      uVar2 = uVar2 - 0x61;
joined_r0x0111eb16:
      if (0x10 < uVar2) {
        if (uVar2 == 0x11) {
          FUN_0111e2c0(param_1);
          goto LAB_0111ebf3;
        }
LAB_0111ebeb:
        FUN_0111e8d0(param_1);
        goto LAB_0111ebf3;
      }
    }
    else if (1 < uVar2 - 0x73) {
      if (uVar2 == 0x75) {
LAB_0111ebcd:
        FUN_0111e320(param_1);
        goto LAB_0111ebf3;
      }
      if (4 < uVar2 - 0x76) {
        uVar2 = uVar2 - 0x7b;
joined_r0x0111eb53:
        if (3 < uVar2) goto LAB_0111ebeb;
        goto LAB_0111eb59;
      }
    }
    FUN_0111d1b0(param_1);
    goto LAB_0111ebf3;
  }
  if (uVar2 == 0x3c) {
    FUN_0111d210(param_1);
    goto LAB_0111ebf3;
  }
  if (uVar2 < 0x24) {
    if (uVar2 == 0x23) {
      FUN_0111d110(param_1);
      goto LAB_0111ebf3;
    }
    if (uVar2 < 0xe) {
      if (uVar2 == 0xd) {
        FUN_0111d0d0(param_1);
        goto LAB_0111ebf3;
      }
      if (uVar2 - 1 == 0xffffffffffffffff) {
        FUN_0111d280(param_1);
        goto LAB_0111ebf3;
      }
      if (8 < uVar2 - 1) {
        if (uVar2 == 10) {
          FUN_0111d1f0(param_1);
          goto LAB_0111ebf3;
        }
        if (1 < uVar2 - 0xb) goto LAB_0111ebeb;
      }
    }
    else if (0x12 < uVar2 - 0xe) {
      if (uVar2 != 0x21) {
        if (uVar2 == 0x22) {
          FUN_0111e030(param_1);
          goto LAB_0111ebf3;
        }
        goto LAB_0111ebeb;
      }
      goto LAB_0111eb59;
    }
    FUN_0111dfd0(param_1);
    goto LAB_0111ebf3;
  }
  if (uVar2 < 0x2f) {
    if (uVar2 == 0x2e) {
LAB_0111ebaf:
      FUN_0111dea0(param_1);
      goto LAB_0111ebf3;
    }
    if (1 < uVar2 - 0x25) {
      if (uVar2 == 0x27) {
        FUN_0111e3f0(param_1);
        goto LAB_0111ebf3;
      }
      if (5 < uVar2 - 0x28) goto LAB_0111ebeb;
    }
  }
  else if (uVar2 != 0x2f) {
    if (uVar2 - 0x30 < 10) goto LAB_0111ebaf;
    if (1 < uVar2 - 0x3a) goto LAB_0111ebeb;
  }
LAB_0111eb59:
  FUN_0111d0b0(param_1);
LAB_0111ebf3:
  FUN_00bc2200(param_1);
  return;
}

