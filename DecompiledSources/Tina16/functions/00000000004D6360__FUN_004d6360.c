/* Ghidra address: 004d6360 */
/* Ghidra symbol: FUN_004d6360 */


int FUN_004d6360(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (param_1 == 0) {
      return iVar1;
    }
    iVar2 = 0xc0;
    do {
      if (param_2 + 0x18 + (longlong)iVar2 * 0x15 == param_1) {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    param_1 = *(longlong *)(param_1 + 5);
  } while( true );
}

