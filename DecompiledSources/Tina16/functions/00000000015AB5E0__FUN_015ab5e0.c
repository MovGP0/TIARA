/* Ghidra address: 015ab5e0 */
/* Ghidra symbol: FUN_015ab5e0 */


void FUN_015ab5e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (DAT_01f6bdd8 != (code *)0x0) {
    if ((DAT_01f6bde0 != 0) && (cVar1 = FUN_015ab240(DAT_01f6bde0,&DAT_00401a88), cVar1 == '\0')) {
      return;
    }
    (*DAT_01f6bdd8)(DAT_01f6bde0,param_1,param_2,param_3);
  }
  return;
}

