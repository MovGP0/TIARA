/* Ghidra address: 00412550 */
/* Ghidra symbol: FUN_00412550 */


undefined8 FUN_00412550(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00406e30();
  if (param_1[2] == iVar1) {
    param_1[1] = param_1[1] + 1;
    uVar2 = 1;
  }
  else {
    if (*param_1 == 0) {
      LOCK();
      iVar1 = *param_1;
      if (iVar1 == 0) {
        *param_1 = 1;
        iVar1 = 0;
      }
      UNLOCK();
      if (iVar1 == 0) {
        iVar1 = FUN_00406e30();
        param_1[2] = iVar1;
        param_1[1] = 1;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

