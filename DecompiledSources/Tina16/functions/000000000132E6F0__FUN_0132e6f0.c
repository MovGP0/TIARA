/* Ghidra address: 0132e6f0 */
/* Ghidra symbol: FUN_0132e6f0 */


void FUN_0132e6f0(longlong *param_1,short *param_2,ushort param_3)

{
  short *psVar1;
  longlong lVar2;
  
  if ((ushort)param_2[1] <= param_3) {
    FUN_0132c0e0(L"row index is out of range",4,(double)param_3);
  }
  if (*param_1 == 0) {
    lVar2 = FUN_0132c700(*param_2);
    *param_1 = lVar2;
  }
  else if (*param_2 != *(short *)*param_1) {
    FUN_0132c080(L"matrice and vector must have same length",0x13);
  }
  psVar1 = (short *)*param_1;
  *(ulonglong *)(psVar1 + 4) = *(longlong *)(param_2 + 4) + (ulonglong)param_3 * 8;
  *psVar1 = *param_2;
  psVar1[1] = param_2[2];
  *(undefined8 *)(psVar1 + 8) = *(undefined8 *)(param_2 + 8);
  psVar1[0xc] = 0;
  psVar1[0xd] = 0;
  return;
}

