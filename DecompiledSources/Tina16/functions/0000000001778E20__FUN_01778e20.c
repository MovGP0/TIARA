/* Ghidra address: 01778e20 */
/* Ghidra symbol: FUN_01778e20 */


void FUN_01778e20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x60));
  if (*(char *)(param_2 + 0x5f) != '\0') {
    cVar1 = FUN_00440a20(*(undefined8 *)(param_2 + 0x50),1);
    if (cVar1 != '\0') {
      FUN_004412f0(*(undefined8 *)(param_2 + 0x50));
    }
  }
  return;
}

