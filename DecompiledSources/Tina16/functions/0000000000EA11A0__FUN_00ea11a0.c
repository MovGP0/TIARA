/* Ghidra address: 00ea11a0 */
/* Ghidra symbol: FUN_00ea11a0 */


undefined8 FUN_00ea11a0(longlong param_1,int param_2,ushort *param_3,int *param_4,int param_5)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = (ushort *)(param_1 + -2);
  uVar3 = (uint)*(ushort *)(param_1 + -2);
  if (param_5 != 0) {
    if ((*(ushort *)(param_1 + -2) & 0xfc00) == 0xdc00) {
      puVar2 = (ushort *)(param_1 + -4);
    }
    uVar3 = (uint)*puVar2;
    if ((uVar3 & 0xfc00) == 0xd800) {
      uVar3 = (*puVar2 & 0x3ff) * 0x400 + 0x10000 + (puVar2[1] & 0x3ff);
    }
  }
  if (param_2 == 2) {
    if (uVar3 != 0xd) {
      if (uVar3 != 10) {
        return 0;
      }
      iVar1 = 1;
      if (param_3 < puVar2) {
        iVar1 = (puVar2[-1] == 0xd) + 1;
      }
      *param_4 = iVar1;
      return 1;
    }
  }
  else if (uVar3 < 0x85) {
    if (2 < uVar3 - 0xb) {
      if (uVar3 != 10) {
        return 0;
      }
      iVar1 = 1;
      if (param_3 < puVar2) {
        iVar1 = (puVar2[-1] == 0xd) + 1;
      }
      *param_4 = iVar1;
      return 1;
    }
  }
  else if ((1 < uVar3 - 0x2028) && (uVar3 != 0x85)) {
    return 0;
  }
  *param_4 = 1;
  return 1;
}

