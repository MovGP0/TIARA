/* Ghidra address: 01518b90 */
/* Ghidra symbol: FUN_01518b90 */


void FUN_01518b90(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  double local_30 [2];
  
  *(undefined1 *)(param_1 + 0x15) = 1;
  do {
    FUN_01518050(param_1,param_1 + 0x1d,local_30);
    cVar1 = FUN_015186d0(param_1);
    if (cVar1 != '\0') {
      FUN_01518490(param_1);
      *param_2 = 1;
      if ((short)param_1[0x16] == 0) {
        (**(code **)(*param_1 + 0x178))(param_1);
      }
    }
    *(short *)((longlong)param_1 + 0xac) = *(short *)((longlong)param_1 + 0xac) + 1;
    local_30[0] = (double)*(ushort *)((longlong)param_1 + 0xac) * (double)param_1[0x14];
  } while ((local_30[0] < (double)param_1[0x1d] || local_30[0] == (double)param_1[0x1d]) &&
          ((short)param_1[0x16] != 0));
  return;
}

