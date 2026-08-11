/* Ghidra address: 00c565b0 */
/* Ghidra symbol: FUN_00c565b0 */


int FUN_00c565b0(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -0xffffff) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00c56570(param_1,iVar2);
      if (param_2 == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x14);
  }
  return -1;
}

