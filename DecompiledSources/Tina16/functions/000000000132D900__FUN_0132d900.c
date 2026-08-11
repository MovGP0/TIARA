/* Ghidra address: 0132d900 */
/* Ghidra symbol: FUN_0132d900 */


undefined8 FUN_0132d900(short *param_1,double param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  
  sVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = 0;
  do {
    *(double *)(*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar2 * (uint)uVar1) * 8) =
         *(double *)(*(longlong *)(param_1 + 4) + (ulonglong)((uint)uVar2 * (uint)uVar1) * 8) /
         param_2;
    uVar2 = uVar2 + 1;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  return 0;
}

