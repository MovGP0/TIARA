/* Ghidra address: 01b719f0 */
/* Ghidra symbol: FUN_01b719f0 */


void FUN_01b719f0(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(bool *)(param_1 + 0x6cf + (longlong)(iVar1 + 1)) = (1 << ((byte)iVar1 & 0x1f) & param_2) == 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  FUN_00b0b140(*(undefined8 *)(param_1 + 0x6c8),1,2);
  return;
}

