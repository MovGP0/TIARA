/* Ghidra address: 00415260 */
/* Ghidra symbol: FUN_00415260 */


void FUN_00415260(byte *param_1,undefined8 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if (((0 < param_3) && (param_3 <= (int)(uint)bVar1)) && (0 < param_4)) {
    iVar2 = ((uint)bVar1 - param_3) + 1;
    if (iVar2 < param_4) {
      param_4 = iVar2;
    }
    *param_1 = bVar1 - (char)param_4;
    FUN_00409a70(param_1 + (param_3 + param_4),param_1 + param_3,(longlong)(iVar2 - param_4));
  }
  return;
}

