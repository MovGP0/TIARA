/* Ghidra address: 0040c780 */
/* Ghidra symbol: FUN_0040c780 */


ulonglong FUN_0040c780(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = param_1 / 10000;
  param_1 = param_1 % 10000;
  iVar1 = FUN_0040a030();
  if ((longlong)uVar2 < 1) {
    if (iVar1 == 0) {
      if ((param_1 < -5000) || ((param_1 == -5000 && ((uVar2 & 1) != 0)))) {
        uVar2 = uVar2 - 1;
      }
    }
    else if ((iVar1 == 0x2000) && (param_1 < 0)) {
      uVar2 = uVar2 - 1;
    }
  }
  else if (iVar1 == 0) {
    if ((5000 < param_1) || ((param_1 == 5000 && ((uVar2 & 1) != 0)))) {
      uVar2 = uVar2 + 1;
    }
  }
  else if ((iVar1 == 0x4000) && (0 < param_1)) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

