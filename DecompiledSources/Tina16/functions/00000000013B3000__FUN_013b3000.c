/* Ghidra address: 013b3000 */
/* Ghidra symbol: FUN_013b3000 */


undefined1 FUN_013b3000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_2d8 [82];
  undefined8 local_48 [6];
  
  puVar2 = local_48;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_2d8;
  for (lVar1 = 0x52; param_2 = param_2 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

