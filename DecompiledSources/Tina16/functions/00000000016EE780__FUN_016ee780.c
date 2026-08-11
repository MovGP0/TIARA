/* Ghidra address: 016ee780 */
/* Ghidra symbol: FUN_016ee780 */


double FUN_016ee780(int param_1,int param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  bool bVar2;
  double local_18 [2];
  
  bVar1 = *(char *)(param_3 + 0x89) - 8;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_4 >> 8),1) << (bVar1 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_017d1750(local_18,*(undefined8 *)(param_3 + 0x4c0),0,param_1,param_2);
  }
  else {
    local_18[0] = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1 * 8) -
                  *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_2 * 8);
  }
  return local_18[0];
}

