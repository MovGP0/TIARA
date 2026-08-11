/* Ghidra address: 005fc7d0 */
/* Ghidra symbol: FUN_005fc7d0 */


void FUN_005fc7d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
  puVar3 = param_2;
  for (lVar1 = 0x13; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = 0;
  return;
}

