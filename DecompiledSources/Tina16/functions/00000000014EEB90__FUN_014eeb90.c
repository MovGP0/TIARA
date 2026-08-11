/* Ghidra address: 014eeb90 */
/* Ghidra symbol: FUN_014eeb90 */


void FUN_014eeb90(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_c8 [22];
  
  puVar2 = local_c8;
  for (lVar1 = 0x16; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_c8,&DAT_014ed9e8);
  FUN_00417c40(param_1 + 0x7f0,local_c8,&DAT_014ed9e8);
  FUN_00417740(local_c8,&DAT_014ed9e8);
  return;
}

