/* Ghidra address: 016cf990 */
/* Ghidra symbol: FUN_016cf990 */


void FUN_016cf990(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(byte *)(param_2 + 0x28);
  if (uVar1 < 0x4e) {
    if (uVar1 != 0x4d) {
      if (uVar1 < 0x4a) {
        if (uVar1 == 0x49) goto LAB_016cfaa4;
        if (uVar1 == 0x42) {
LAB_016cfa92:
          FUN_014dc860(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
          return;
        }
        if (uVar1 == 0x43) goto LAB_016cfa80;
        if (uVar1 != 0x44) {
          if (3 < uVar1 - 0x45) {
            return;
          }
          goto LAB_016cfa92;
        }
      }
      else if (uVar1 != 0x4a) {
        if (uVar1 == 0x4b) {
          if (*(longlong *)(param_2 + 0x10) == 0) {
            FUN_014dc240(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
            return;
          }
          FUN_014dd5b0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_2 + 0x48),
                       *(undefined8 *)(param_2 + 0x40),
                       (longlong)*(int *)(*(longlong *)(param_2 + 0x30) + 0x10) / 2 & 0xffffffff);
          return;
        }
        if (uVar1 != 0x4c) {
          return;
        }
LAB_016cfa80:
        FUN_014dbf00(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
        return;
      }
    }
LAB_016cfad9:
    FUN_014de7f0(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  }
  else {
    if (uVar1 < 0x55) {
      if (uVar1 == 0x54) {
        FUN_014dc340(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
        return;
      }
      if (uVar1 == 0x51) goto LAB_016cfad9;
      if (uVar1 == 0x52) goto LAB_016cfa80;
      if (uVar1 != 0x53) {
        return;
      }
    }
    else {
      if (uVar1 == 0x56) {
LAB_016cfaa4:
        FUN_014e00d0(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40),
                     *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                     *(undefined1 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x68));
        return;
      }
      if (uVar1 != 0x57) {
        if (uVar1 != 0x59) {
          return;
        }
        FUN_014e0a90(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
        return;
      }
    }
    FUN_014dddc0(*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x40));
  }
  return;
}

