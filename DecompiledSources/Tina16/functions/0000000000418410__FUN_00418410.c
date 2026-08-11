/* Ghidra address: 00418410 */
/* Ghidra symbol: FUN_00418410 */


void FUN_00418410(longlong param_1,longlong param_2,byte *param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  if (param_4 == 0) {
    return;
  }
  uVar2 = (ulonglong)*param_3;
  if (uVar2 < 0xe) {
    if (uVar2 == 0xd) {
      bVar1 = param_3[1];
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00418410(param_1,param_2,**(undefined8 **)(param_3 + (ulonglong)bVar1 + 10),
                     *(undefined4 *)(param_3 + (ulonglong)bVar1 + 6));
        param_1 = param_1 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
        param_2 = param_2 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
      }
      return;
    }
    if (uVar2 != 7) {
      if (uVar2 == 8) {
        FUN_00409a70(param_2,param_1,param_4 << 4);
        return;
      }
      if (1 < uVar2 - 10) {
        uVar2 = uVar2 - 0xc;
        if (uVar2 == 0) {
          FUN_00409a70(param_2,param_1,param_4 * 0x18);
          return;
        }
        goto LAB_0041854c;
      }
    }
  }
  else {
    if (uVar2 == 0xe) {
      bVar1 = param_3[1];
      for (; 0 < param_4; param_4 = param_4 + -1) {
        FUN_00417f00(param_1,param_2,param_3);
        param_1 = param_1 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
        param_2 = param_2 + (ulonglong)*(uint *)(param_3 + (ulonglong)bVar1 + 2);
      }
      return;
    }
    if ((uVar2 != 0xf) && (uVar2 = uVar2 - 0x11, 1 < uVar2)) {
LAB_0041854c:
      FUN_004098e0(CONCAT71((int7)(uVar2 >> 8),2));
      return;
    }
  }
  FUN_00409a70(param_2,param_1,param_4 * 8);
  return;
}

