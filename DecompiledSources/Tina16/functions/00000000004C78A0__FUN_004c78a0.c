/* Ghidra address: 004c78a0 */
/* Ghidra symbol: FUN_004c78a0 */


void FUN_004c78a0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  code *local_28;
  longlong local_20;
  undefined1 local_11;
  byte *local_10;
  
  if (param_3[1] == 0) {
    return;
  }
  if (param_3[2] == 0) {
    if (**(char **)*param_3 != '\a') {
      return;
    }
    uVar2 = FUN_0058ada0(param_2,param_3);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00486f38);
    if (cVar1 == '\0') {
      return;
    }
    lVar3 = FUN_0058ada0(param_2,param_3);
    if ((*(byte *)(lVar3 + 0x58) & 4) == 0) {
      return;
    }
  }
  local_28 = FUN_004c8530;
  local_38 = param_1 + 0x80;
  local_20 = param_1;
  cVar1 = FUN_004c6a30(param_2,param_3,&local_28,param_1);
  if (cVar1 != '\0') {
    return;
  }
  local_11 = FUN_004c5a40(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x50));
  local_10 = *(byte **)*param_3;
  uVar4 = (ulonglong)*local_10;
  if (uVar4 < 10) {
    if (uVar4 != 9) {
      if (6 < uVar4) {
        if (uVar4 == 7) {
          FUN_004c7330(auStack_58);
          return;
        }
        if (uVar4 != 8) {
          return;
        }
        FUN_004c7770(auStack_58);
        return;
      }
      if ((uVar4 != 6) && (2 < uVar4 - 1)) {
        if (uVar4 == 4) {
          FUN_004c7030(auStack_58);
          return;
        }
        if (uVar4 != 5) {
          return;
        }
        goto LAB_004c7a31;
      }
    }
    FUN_004c6f10(auStack_58);
  }
  else {
    if (uVar4 < 0x10) {
      if (uVar4 == 0xf) {
        FUN_004c7650(auStack_58);
        return;
      }
      if (1 < uVar4 - 10) {
        if (uVar4 - 10 != 2) {
          return;
        }
        FUN_004c7820(auStack_58);
        return;
      }
    }
    else {
      if (uVar4 == 0x10) {
        FUN_004c7080(auStack_58);
        return;
      }
      if (uVar4 != 0x12) {
        return;
      }
    }
LAB_004c7a31:
    FUN_004c70c0(auStack_58);
  }
  return;
}

