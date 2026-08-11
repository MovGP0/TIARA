/* Ghidra address: 0044ee20 */
/* Ghidra symbol: FUN_0044ee20 */


void FUN_0044ee20(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      dVar2 = (double)FUN_00448ed0();
      do {
        dVar3 = (double)FUN_00448ed0();
        if (1.1574074074074074e-08 < dVar3 - dVar2) break;
        LOCK();
        iVar1 = *param_2;
        if (iVar1 == 0) {
          *param_2 = 1;
          iVar1 = 0;
        }
        UNLOCK();
      } while (iVar1 != 0);
      if (*(longlong *)(param_2 + 2) != 0) {
        thunk_FUN_041d2921(*(longlong *)(param_2 + 2));
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

