/* Ghidra address: 004c8cb0 */
/* Ghidra symbol: FUN_004c8cb0 */


undefined8 FUN_004c8cb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_2 = *param_2 + 1;
  uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x18) + -1 + *param_2);
  if (uVar2 < 0x30) {
    if (uVar2 == 0x23) {
      return 4;
    }
    if (uVar2 == 0x24) {
      return 6;
    }
    if (uVar2 == 0x27) {
      return 5;
    }
    if (uVar2 == 0x2d) {
      return 7;
    }
  }
  else {
    if (uVar2 - 0x30 < 10) {
      return CONCAT71((int7)(uVar2 - 0x30 >> 8),3);
    }
    uVar3 = uVar2 - 0x41;
    if (((uVar3 < 0x1a) || (uVar3 = 0, uVar2 == 0x5f)) || (uVar3 = uVar2 - 0x61, uVar3 < 0x1a)) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  lVar1 = FUN_0045ae90();
  if ((*(longlong *)(param_1 + 0x78) != lVar1) ||
     (*(byte *)(*(longlong *)(param_1 + 0x18) + -1 + *param_2) < 0x80)) {
    return 0;
  }
  *param_2 = *param_2 + -1;
  uVar2 = FUN_004c8ae0(*(undefined8 *)(param_1 + 0x18),param_2);
  uVar2 = uVar2 & 0xff;
  if (uVar2 < 0xc) {
    uVar3 = 0;
    if (uVar2 != 1) {
      uVar3 = uVar2 - 5;
      if (uVar3 < 5) {
LAB_004c8dba:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      if (uVar2 != 10) {
        return 0;
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = uVar2 - 0xc;
    if (1 < uVar3) {
      uVar3 = 0;
      if (uVar2 == 0xe) goto LAB_004c8dba;
      if (uVar2 != 0x10) {
        return 0;
      }
      uVar3 = 0;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),2);
}

