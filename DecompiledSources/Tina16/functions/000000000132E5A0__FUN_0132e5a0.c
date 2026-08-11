/* Ghidra address: 0132e5a0 */
/* Ghidra symbol: FUN_0132e5a0 */


void FUN_0132e5a0(longlong *param_1,ushort *param_2,ushort param_3)

{
  ushort *puVar1;
  longlong lVar2;
  
  if (param_3 < *param_2) {
    if (*param_1 == 0) {
      lVar2 = FUN_0132c700(param_2[1]);
      *param_1 = lVar2;
    }
    else if (param_2[1] != *(ushort *)*param_1) {
      FUN_0132c080(L"matrice and vector must have same length",0x13);
    }
  }
  else {
    FUN_0132c0e0(L"row index is out of range",4,(double)param_3);
  }
  puVar1 = (ushort *)*param_1;
  *(ulonglong *)(puVar1 + 4) =
       *(longlong *)(param_2 + 4) + (ulonglong)((uint)param_3 * (uint)param_2[2]) * 8;
  *puVar1 = param_2[1];
  puVar1[1] = 1;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}

