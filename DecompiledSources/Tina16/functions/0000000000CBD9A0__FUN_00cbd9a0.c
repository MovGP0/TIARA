/* Ghidra address: 00cbd9a0 */
/* Ghidra symbol: FUN_00cbd9a0 */


undefined4 FUN_00cbd9a0(longlong *param_1,undefined4 param_2,short *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  
  if (-1 < (int)param_4) {
    bVar1 = false;
    if (param_4 < 0x80000000) {
      iVar2 = param_4 + 1;
      do {
        if ((short)param_2 == *param_3) {
          bVar1 = true;
          break;
        }
        param_3 = param_3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (!bVar1) {
      (**(code **)(*param_1 + 0x120))(param_1);
    }
  }
  return param_2;
}

