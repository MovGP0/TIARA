/* Ghidra address: 01069cb0 */
/* Ghidra symbol: FUN_01069cb0 */


void FUN_01069cb0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  cVar1 = *(char *)(param_1 + 0x161);
  if (((byte)(cVar1 - 1U) < 3) || (cVar1 == '\a')) {
    FUN_01067d50(param_1);
    goto LAB_0106a100;
  }
  if (cVar1 == '\b') {
    FUN_01069a40(param_1);
    goto LAB_0106a100;
  }
  if (cVar1 == '\t') {
    FUN_010683a0(param_1);
    goto LAB_0106a100;
  }
  uVar2 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (uVar2 < 0x30) {
    if (uVar2 == 0x2f) {
      FUN_010695f0(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 < 0x26) {
      if (uVar2 == 0x25) {
        FUN_010688d0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 < 0xe) {
        if (uVar2 == 0xd) {
          FUN_010680f0(param_1);
          goto LAB_0106a100;
        }
        if (uVar2 - 1 == 0xffffffffffffffff) {
          FUN_010689b0(param_1);
          goto LAB_0106a100;
        }
        if (8 < uVar2 - 1) {
          if (uVar2 == 10) {
            FUN_01068710(param_1);
            goto LAB_0106a100;
          }
          if (1 < uVar2 - 0xb) goto LAB_0106a0f8;
        }
      }
      else if (0x12 < uVar2 - 0xe) {
        if (uVar2 == 0x21) {
          FUN_01068940(param_1);
          goto LAB_0106a100;
        }
        if (uVar2 == 0x22) {
          FUN_01069940(param_1);
          goto LAB_0106a100;
        }
        if (uVar2 == 0x23) {
          FUN_010681f0(param_1);
          goto LAB_0106a100;
        }
        goto LAB_0106a0f8;
      }
      FUN_01069800(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 < 0x2b) {
      if (uVar2 == 0x2a) {
        FUN_010698d0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x26) {
        FUN_01067eb0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x27) {
        FUN_01067f40(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x28) {
        FUN_01069580(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x29) {
        FUN_01069550(param_1);
        goto LAB_0106a100;
      }
    }
    else {
      if (uVar2 == 0x2b) {
        FUN_010693e0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x2c) {
        FUN_010681c0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x2d) {
        FUN_01068810(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x2e) {
        FUN_01069470(param_1);
        goto LAB_0106a100;
      }
    }
  }
  else if (uVar2 < 0x5c) {
    if (uVar2 == 0x5b) {
      FUN_010698a0(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 < 0x3e) {
      if (uVar2 == 0x3d) {
        FUN_01068510(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 - 0x30 < 10) {
        FUN_01068b40(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x3a) {
        FUN_01068150(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x3b) {
        FUN_010695b0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x3c) {
        FUN_01068740(param_1);
        goto LAB_0106a100;
      }
    }
    else {
      if (uVar2 == 0x3e) {
        FUN_01068580(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x3f) {
        FUN_01068650(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x40) {
        FUN_01068040(param_1);
        goto LAB_0106a100;
      }
      uVar2 = uVar2 - 0x41;
joined_r0x01069f2f:
      if (uVar2 < 0x1a) goto LAB_01069ffe;
    }
  }
  else {
    if (uVar2 < 0x7c) {
      if (uVar2 == 0x7b) {
        FUN_010680b0(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x5d) {
        FUN_01069870(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 == 0x5e) {
        FUN_01069c10(param_1);
        goto LAB_0106a100;
      }
      if (uVar2 != 0x5f) {
        uVar2 = uVar2 - 0x61;
        goto joined_r0x01069f2f;
      }
LAB_01069ffe:
      FUN_01068680(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 == 0x7c) {
      FUN_01069350(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 == 0x7d) {
      FUN_01068070(param_1);
      goto LAB_0106a100;
    }
    if (uVar2 == 0x7e) {
      FUN_01069be0(param_1);
      goto LAB_0106a100;
    }
  }
LAB_0106a0f8:
  FUN_01069c80(param_1);
LAB_0106a100:
  FUN_00bc2200(param_1);
  return;
}

