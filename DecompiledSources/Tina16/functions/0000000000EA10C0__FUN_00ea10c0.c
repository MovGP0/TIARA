/* Ghidra address: 00ea10c0 */
/* Ghidra symbol: FUN_00ea10c0 */


undefined8 FUN_00ea10c0(ushort *param_1,int param_2,longlong param_3,int *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if ((param_5 != 0) && ((uVar2 & 0xfc00) == 0xd800)) {
    uVar2 = (*param_1 & 0x3ff) * 0x400 + 0x10000 + (param_1[1] & 0x3ff);
  }
  if (param_2 == 2) {
    if (uVar2 == 0xd) {
      iVar1 = 1;
      if (param_1 < (ushort *)(param_3 + -2)) {
        iVar1 = (param_1[1] == 10) + 1;
      }
      *param_4 = iVar1;
      return 1;
    }
    if (uVar2 != 10) {
      return 0;
    }
  }
  else if (uVar2 < 0x85) {
    if (2 < uVar2 - 10) {
      if (uVar2 != 0xd) {
        return 0;
      }
      iVar1 = 1;
      if (param_1 < (ushort *)(param_3 + -2)) {
        iVar1 = (param_1[1] == 10) + 1;
      }
      *param_4 = iVar1;
      return 1;
    }
  }
  else if ((1 < uVar2 - 0x2028) && (uVar2 != 0x85)) {
    return 0;
  }
  *param_4 = 1;
  return 1;
}

