/* Ghidra address: 004d1160 */
/* Ghidra symbol: FUN_004d1160 */


ulonglong FUN_004d1160(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  uVar3 = 0;
  cVar2 = FUN_004d1390(&local_48);
  if (cVar2 != '\0') {
    uVar1 = ((((local_40 - param_1[1]) + local_38) - param_1[2]) + local_30) - param_1[3];
    if ((ulonglong)(local_48 - *param_1) < uVar1) {
      uVar3 = ((uVar1 - (local_48 - *param_1)) * 100) / uVar1;
    }
    *param_1 = local_48;
    param_1[1] = local_40;
    param_1[2] = local_38;
    param_1[3] = local_30;
  }
  return uVar3 & 0xffffffff;
}

