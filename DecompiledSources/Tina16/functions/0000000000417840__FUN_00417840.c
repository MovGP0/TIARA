/* Ghidra address: 00417840 */
/* Ghidra symbol: FUN_00417840 */


longlong FUN_00417840(longlong param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return param_1;
  }
  uVar2 = (ulonglong)*param_2;
  if (uVar2 < 0xf) {
    if (uVar2 == 0xe) {
      bVar1 = param_2[1];
      lVar3 = param_1;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_00417740(lVar3,param_2);
        lVar3 = lVar3 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2);
      }
      return param_1;
    }
    if (uVar2 == 10) {
      FUN_00414590(param_1,param_3 & 0xffffffff);
      return param_1;
    }
    if (uVar2 == 0xb) {
      FUN_004145c0(param_1,param_3 & 0xffffffff);
      return param_1;
    }
    lVar3 = param_1;
    if (uVar2 == 0xc) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_00417810(lVar3);
        lVar3 = lVar3 + 0x18;
      }
      return param_1;
    }
    lVar3 = uVar2 - 0xd;
    if (lVar3 == 0) {
      bVar1 = param_2[1];
      lVar3 = param_1;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_00417840(lVar3,**(undefined8 **)(param_2 + (ulonglong)bVar1 + 10),
                     *(undefined4 *)(param_2 + (ulonglong)bVar1 + 6));
        lVar3 = lVar3 + (ulonglong)*(uint *)(param_2 + (ulonglong)bVar1 + 2);
      }
      return param_1;
    }
  }
  else {
    lVar3 = param_1;
    if (uVar2 == 0xf) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_0041b800(lVar3);
        lVar3 = lVar3 + 8;
      }
      return param_1;
    }
    if (uVar2 == 0x11) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        FUN_00419430(lVar3,param_2);
        lVar3 = lVar3 + 8;
      }
      return param_1;
    }
    lVar3 = uVar2 - 0x12;
    if (lVar3 == 0) {
      FUN_00414560(param_1,param_3 & 0xffffffff);
      return param_1;
    }
  }
  FUN_004098e0(CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
  return param_1;
}

