/* Ghidra address: 00ef4d80 */
/* Ghidra symbol: FUN_00ef4d80 */


void FUN_00ef4d80(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_68 [10];
  
  puVar2 = local_68;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

