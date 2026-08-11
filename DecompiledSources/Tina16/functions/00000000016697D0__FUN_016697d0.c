/* Ghidra address: 016697d0 */
/* Ghidra symbol: FUN_016697d0 */


void FUN_016697d0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_13d8 [82];
  undefined8 local_1148;
  undefined8 local_de0;
  undefined1 local_3f8;
  
  local_3f8 = 0;
  puVar2 = local_13d8;
  for (lVar1 = 0x278; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00442c10(local_de0);
  FUN_004095f0(local_1148);
  return;
}

