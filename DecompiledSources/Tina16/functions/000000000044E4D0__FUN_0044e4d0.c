/* Ghidra address: 0044e4d0 */
/* Ghidra symbol: FUN_0044e4d0 */


undefined8 FUN_0044e4d0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  if ((int)uVar1 < -0x3fffff6d) {
    uVar2 = uVar1;
    if (uVar1 == 0xc0000092) {
LAB_0044e578:
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),6);
    }
    if ((int)uVar1 < -0x3fffff71) {
      if (uVar1 == 0xc000008e) {
        return 0xc0000007;
      }
      if (uVar1 == 0xc0000005) {
        return 0xb;
      }
      if (uVar1 == 0xc000008c) {
        return 4;
      }
      uVar3 = (ulonglong)(uVar1 + 0x3fffff73);
      if (uVar1 + 0x3fffff73 == 0) {
        uVar3 = 0;
        goto LAB_0044e584;
      }
    }
    else {
      uVar2 = uVar1 + 0x3fffff71;
      if (uVar2 < 2) goto LAB_0044e578;
      uVar3 = (ulonglong)(uVar1 + 0x3fffff6f);
      if (uVar1 + 0x3fffff6f == 0) {
        return 8;
      }
    }
  }
  else if ((int)uVar1 < -0x3fffff69) {
    if (uVar1 == 0xc0000096) {
      return 0xc000000c;
    }
    uVar3 = (ulonglong)(uVar1 + 0x3fffff6d);
    if (uVar1 + 0x3fffff6d == 0) {
LAB_0044e584:
      return CONCAT71((int7)(uVar3 >> 8),9);
    }
    if (uVar1 == 0xc0000094) {
      return 3;
    }
    uVar3 = (ulonglong)(uVar1 + 0x3fffff6b);
    if (uVar1 + 0x3fffff6b == 0) {
      return 5;
    }
  }
  else {
    if (uVar1 == 0xc00000fd) {
      return 0xe;
    }
    uVar3 = (ulonglong)(uVar1 + 0x3ffffec6);
    if (uVar1 + 0x3ffffec6 == 0) {
      return 0xd;
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),0x16);
}

