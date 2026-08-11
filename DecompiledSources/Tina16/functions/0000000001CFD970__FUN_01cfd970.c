/* Ghidra address: 01cfd970 */
/* Ghidra symbol: FUN_01cfd970 */


void FUN_01cfd970(longlong *param_1,int param_2,byte *param_3)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [256];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if (param_1[0x1b] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1c8))(param_1);
    if ((param_2 <= iVar1 + -1) && (-1 < param_2)) {
      FUN_00414ff0(param_1[0x1b] + 0xc + (longlong)param_2 * 0x10c,local_128);
    }
  }
  return;
}

