/* Ghidra address: 0041b560 */
/* Ghidra symbol: FUN_0041b560 */


void FUN_0041b560(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  puVar1 = (undefined8 *)PTR_DAT_01db9078;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    uVar2 = FUN_00419be0(puVar1);
    cVar3 = (*param_1)(uVar2,param_2);
    if (cVar3 == '\0') break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return;
}

