/* Ghidra address: 0041cb20 */
/* Ghidra symbol: FUN_0041cb20 */


void FUN_0041cb20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0041cb40();
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_0041c260();
  }
  *puVar1 = param_2;
  return;
}

