/* Ghidra address: 00419c40 */
/* Ghidra symbol: FUN_00419c40 */


longlong FUN_00419c40(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)PTR_DAT_01db9078;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return param_1;
    }
    if (((param_1 == puVar1[1]) || (param_1 == puVar1[2])) || (param_1 == puVar1[3])) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  lVar2 = FUN_00419be0(puVar1);
  return lVar2;
}

