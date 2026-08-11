/* Ghidra address: 01cfac60 */
/* Ghidra symbol: FUN_01cfac60 */


undefined8 * FUN_01cfac60(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)
           FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
  puVar3 = param_2;
  for (lVar2 = 0x17; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)puVar1;
  return param_2;
}

