/* Ghidra address: 00411b30 */
/* Ghidra symbol: FUN_00411b30 */


void FUN_00411b30(int *param_1)

{
  int iVar1;
  undefined4 local_1c [3];
  
  local_1c[0] = 0;
  do {
    if (*param_1 == 0) {
      LOCK();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_1 = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_00411aa0(local_1c);
  } while( true );
}

