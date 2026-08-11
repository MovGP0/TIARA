/* Ghidra address: 010d1930 */
/* Ghidra symbol: FUN_010d1930 */


undefined8 FUN_010d1930(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_308 [32];
  char local_208;
  
  puVar3 = local_308;
  for (lVar2 = 0x5e; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (((local_208 == '\0') || (local_208 == '\x14')) || (local_208 == '\a')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

