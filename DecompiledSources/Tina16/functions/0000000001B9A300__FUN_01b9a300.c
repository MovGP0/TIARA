/* Ghidra address: 01b9a300 */
/* Ghidra symbol: FUN_01b9a300 */


void FUN_01b9a300(longlong param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  
  if (*param_3 == 0x1b) {
    cVar1 = FUN_0064eb50(*(undefined8 *)(param_1 + 0x7e8));
    if (cVar1 != '\0') {
      FUN_0064eb00(*(undefined8 *)(param_1 + 0x7e8),0);
    }
  }
  return;
}

