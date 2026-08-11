/* Ghidra address: 0041b5c0 */
/* Ghidra symbol: FUN_0041b5c0 */


void FUN_0041b5c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x10);
  *puVar1 = DAT_01db9080;
  puVar1[1] = param_1;
  DAT_01db9080 = puVar1;
  return;
}

