/* Ghidra address: 0040c860 */
/* Ghidra symbol: FUN_0040c860 */


ulonglong FUN_0040c860(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 local_30;
  
  auVar1._8_8_ = SUB168(SEXT816(param_1) * SEXT816(param_2),8);
  auVar1._0_8_ = param_1 * param_2;
  uVar3 = SUB168(auVar1 / SEXT816((longlong)param_3),0);
  local_30 = SUB168(auVar1 % SEXT816((longlong)param_3),0);
  if (local_30 < 0) {
    local_30 = -local_30;
  }
  lVar4 = 1;
  if ((longlong)uVar3 < 0) {
    lVar4 = -1;
  }
  iVar2 = FUN_0040a030();
  if (iVar2 != 0x6000) {
    param_3 = (ulonglong)(local_30 << 0x20) / param_3;
    if (iVar2 == 0) {
      if ((0x80000000 < param_3) || ((param_3 == 0x80000000 && ((uVar3 & 1) != 0)))) {
        uVar3 = uVar3 + lVar4;
      }
    }
    else if (iVar2 == 0x2000) {
      if ((param_3 != 0) && (lVar4 < 0)) {
        uVar3 = uVar3 + lVar4;
      }
    }
    else if (((iVar2 == 0x4000) && (param_3 != 0)) && (0 < lVar4)) {
      uVar3 = uVar3 + lVar4;
    }
  }
  return uVar3;
}

