/* Ghidra address: 0058af20 */
/* Ghidra symbol: FUN_0058af20 */


void FUN_0058af20(undefined8 param_1,undefined8 *param_2,ulonglong param_3)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)*param_2;
  if (*pcVar2 == '\a') {
    FUN_005901c0(&DAT_0058b3f0,param_1,param_2,param_3);
  }
  else {
    bVar1 = pcVar2[(ulonglong)(byte)pcVar2[1] + 2];
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        FUN_00590740(&DAT_0058bc78,param_1,param_2,param_3 & 0xffffffff);
      }
      else if (bVar1 == 0) {
        FUN_00590320(&LAB_0058b610,param_1,param_2,param_3 & 0xffffffff);
      }
      else if (bVar1 == 1) {
        FUN_00590480(&DAT_0058b838,param_1,param_2,param_3 & 0xffffffff);
      }
      else if (bVar1 == 2) {
        FUN_005905e0(&LAB_0058ba50,param_1,param_2,param_3 & 0xffffffff);
      }
    }
    else if (bVar1 == 4) {
      FUN_00590890(&DAT_0058be90,param_1,param_2,param_3 & 0xffffffff);
    }
    else if (bVar1 == 5) {
      FUN_005909e0(&LAB_0058c0b0,param_1,param_2,param_3 & 0xffffffff);
    }
  }
  return;
}

