/* Ghidra address: 00611b00 */
/* Ghidra symbol: FUN_00611b00 */


int FUN_00611b00(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_02012050 == 0) {
    FUN_00611a70();
  }
  if (DAT_02012058 != (code *)0x0) {
    iVar2 = (*DAT_02012058)(param_1);
    if (iVar2 != 0) {
      bVar1 = 1;
      goto LAB_00611b34;
    }
  }
  bVar1 = 0;
LAB_00611b34:
  return -(uint)bVar1;
}

