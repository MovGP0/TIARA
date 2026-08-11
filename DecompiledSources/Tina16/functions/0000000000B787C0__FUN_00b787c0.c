/* Ghidra address: 00b787c0 */
/* Ghidra symbol: FUN_00b787c0 */


ulonglong FUN_00b787c0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((ushort)param_1 < 2) {
    param_1 = param_1 & 0xffffffff;
  }
  else {
    uVar5 = 0x10001 / (param_1 & 0xffff);
    uVar1 = 0x10001 % (param_1 & 0xffff);
    if ((short)uVar1 == 1) {
      param_1 = (ulonglong)(ushort)(1 - (short)uVar5);
    }
    else {
      uVar4 = 1;
      do {
        uVar2 = param_1 & 0xffff;
        param_1 = uVar2 % uVar1;
        uVar3 = (short)uVar4 + (short)(uVar2 / uVar1) * (short)uVar5;
        uVar4 = (ulonglong)uVar3;
        if ((short)param_1 == 1) {
          return uVar4;
        }
        uVar2 = uVar1 / param_1;
        uVar1 = uVar1 % param_1;
        uVar3 = (short)uVar5 + (short)uVar2 * uVar3;
        uVar5 = (ulonglong)uVar3;
      } while ((short)uVar1 != 1);
      param_1 = (ulonglong)(ushort)(1 - uVar3);
    }
  }
  return param_1;
}

