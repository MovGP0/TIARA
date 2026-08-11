/* Ghidra address: 019660b0 */
/* Ghidra symbol: FUN_019660b0 */


ulonglong FUN_019660b0(longlong param_1,double param_2,double param_3)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  dVar4 = 0.0;
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (*(double *)(param_1 + 0xa8) == 0.0) {
    dVar4 = 4.0;
    dVar5 = 4.0;
  }
  else if (*(double *)(param_1 + 0xb0) == 0.0) {
    dVar6 = 4.0;
  }
  dVar2 = (double)FUN_019508b0(param_1);
  local_88 = (double)FUN_019508b0(param_1);
  local_88 = local_88 + *(double *)(param_1 + 0xa8);
  dVar3 = (double)FUN_01950860(param_1);
  local_80 = (double)FUN_01950860(param_1);
  local_80 = local_80 + *(double *)(param_1 + 0xb0);
  local_98 = dVar2;
  if (local_88 < dVar2) {
    local_98 = local_88;
    local_88 = dVar2;
  }
  local_90 = dVar3;
  if (local_80 < dVar3) {
    local_90 = local_80;
    local_80 = dVar3;
  }
  if ((((param_2 < local_98 - dVar4) || (local_88 + dVar5 < param_2)) ||
      (param_3 < local_90 - dVar6)) || (local_80 + dVar6 < param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  if (((*(char *)(param_1 + 0x2c4) != '\0') && (*(double *)(param_1 + 0xa8) != 0.0)) &&
     (*(double *)(param_1 + 0xb0) != 0.0)) {
    dVar2 = *(double *)(param_1 + 0xb0) / *(double *)(param_1 + 0xa8);
    dVar4 = (double)FUN_019508b0(param_1);
    dVar5 = (double)FUN_01950860(param_1);
    FUN_0040c660(dVar2);
    dVar6 = (double)FUN_0040bcd0();
    dVar4 = (double)FUN_0040c850((dVar2 * (param_2 - dVar4) - (param_3 - dVar5)) * dVar6);
    if (dVar4 < 5.0) {
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    }
    if (((param_2 < local_98 - 5.0) || (local_88 + 5.0 < param_2)) ||
       ((param_3 < local_90 - 5.0 || (local_80 + 5.0 < param_3)))) {
      uVar1 = 0;
    }
  }
  return uVar1 & 0xffffffff;
}

