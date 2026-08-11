/* Ghidra address: 01807980 */
/* Ghidra symbol: FUN_01807980 */


void FUN_01807980(longlong *param_1,short *param_2)

{
  char cVar1;
  short *psVar2;
  undefined8 local_20;
  
  local_20 = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  if (param_2 != (short *)0x0) {
    while (psVar2 = param_2, *param_2 != 0) {
      for (; (cVar1 = FUN_0043e100(*psVar2,&DAT_01807a68), cVar1 == '\0' && (*psVar2 != 0x2028));
          psVar2 = psVar2 + 1) {
      }
      FUN_004147a0(&local_20,param_2,((longlong)psVar2 - (longlong)param_2) / 2 & 0xffffffff);
      (**(code **)(*param_1 + 0x70))(param_1,local_20);
      param_2 = psVar2;
      if (*psVar2 == 0xd) {
        param_2 = psVar2 + 1;
      }
      if (*param_2 == 10) {
        param_2 = param_2 + 1;
      }
      if (*param_2 == 0x2028) {
        param_2 = param_2 + 1;
      }
    }
  }
  FUN_00414520(&local_20);
  return;
}

