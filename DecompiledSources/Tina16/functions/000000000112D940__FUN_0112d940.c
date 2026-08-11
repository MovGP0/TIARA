/* Ghidra address: 0112d940 */
/* Ghidra symbol: FUN_0112d940 */


undefined8 FUN_0112d940(byte *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar3 = *param_1 / 2;
  if (-1 < (int)(uVar3 - 1)) {
    pbVar1 = param_1 + 2;
    do {
      if (*pbVar1 != 0) {
        return 0;
      }
      pbVar1 = pbVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (((*param_1 & 1) == 0) || ((param_1[(longlong)(int)((*param_1 + 1) / 2 - 1) + 2] & 0xf0) == 0))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

