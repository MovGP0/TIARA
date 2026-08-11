/* Ghidra address: 0044f560 */
/* Ghidra symbol: FUN_0044f560 */


int FUN_0044f560(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int local_30;
  int local_2c [3];
  
  local_2c[0] = 0;
  if (param_2 < 1) {
    bVar1 = true;
  }
  else {
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + -4);
    }
    bVar1 = iVar2 < param_2;
  }
  if (!bVar1) {
    FUN_0044f4c0(param_1,param_2 + -1,&local_30,local_2c);
    if (local_30 < param_2 + -1) {
      bVar1 = true;
    }
    else {
      iVar2 = 0;
      if (param_1 != 0) {
        iVar2 = *(int *)(param_1 + -4);
      }
      if (local_2c[0] < iVar2) {
        bVar1 = false;
      }
      else {
        if (local_2c[0] == 1) {
          iVar2 = 0;
          if (param_1 != 0) {
            iVar2 = *(int *)(param_1 + -4);
          }
          bVar1 = 0 < iVar2;
        }
        else {
          bVar1 = false;
        }
        bVar1 = !bVar1;
      }
    }
    if (bVar1) {
      local_2c[0] = 0;
    }
    else if (1 < param_2) {
      local_2c[0] = local_2c[0] + 1;
    }
  }
  return local_2c[0];
}

