/* Ghidra address: 0041b520 */
/* Ghidra symbol: FUN_0041b520 */


void FUN_0041b520(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)PTR_DAT_01db9078;
  while ((puVar1 != (undefined8 *)0x0 && (cVar2 = (*param_1)(puVar1[1],param_2), cVar2 != '\0'))) {
    puVar1 = (undefined8 *)*puVar1;
  }
  return;
}

