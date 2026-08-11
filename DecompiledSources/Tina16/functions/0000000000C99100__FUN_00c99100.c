/* Ghidra address: 00c99100 */
/* Ghidra symbol: FUN_00c99100 */


void FUN_00c99100(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + -8);
  }
  if (DAT_01eaa9f0 == (code *)0x0) {
    if (DAT_01eaa9f8 != (code *)0x0) {
      (*DAT_01eaa9f8)(param_1,param_2,uVar1);
    }
  }
  else {
    (*DAT_01eaa9f0)(param_1,param_2,uVar1);
  }
  return;
}

