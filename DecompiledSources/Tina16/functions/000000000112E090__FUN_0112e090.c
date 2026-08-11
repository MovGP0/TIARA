/* Ghidra address: 0112e090 */
/* Ghidra symbol: FUN_0112e090 */


void FUN_0112e090(byte *param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 local_3a [42];
  
  FUN_0112ebb0(&DAT_01f24ad8,local_3a,*param_1,0);
  uVar3 = *param_1 / 2;
  if (-1 < (int)(uVar3 - 1)) {
    pbVar2 = param_1 + 2;
    do {
      *pbVar2 = 0x99 - *pbVar2;
      pbVar2 = pbVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if ((*param_1 & 1) != 0) {
    uVar1 = (ulonglong)*param_1 / 2;
    param_1[uVar1 + 2] = 0x90 - (param_1[uVar1 + 2] & 0xf0);
  }
  FUN_0112ddb0(param_1,local_3a,param_1,1);
  param_1[1] = param_1[1] ^ 0x80;
  return;
}

