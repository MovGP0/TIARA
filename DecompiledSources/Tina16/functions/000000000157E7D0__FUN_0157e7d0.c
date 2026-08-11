/* Ghidra address: 0157e7d0 */
/* Ghidra symbol: FUN_0157e7d0 */


void FUN_0157e7d0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_2 != *(char *)(param_1 + 0x48)) {
    if (*(byte *)(param_1 + 8) < 8) {
      bVar2 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (*(byte *)(param_1 + 8) & 0x1f) &
              0xcU) != 0;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      param_2 = '\x01';
      uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02004a30);
      param_1 = FUN_004134c0(uVar1);
    }
    *(char *)(param_1 + 0x48) = param_2;
  }
  return;
}

