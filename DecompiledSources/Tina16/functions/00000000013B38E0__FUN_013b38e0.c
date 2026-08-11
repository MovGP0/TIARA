/* Ghidra address: 013b38e0 */
/* Ghidra symbol: FUN_013b38e0 */


void FUN_013b38e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res18 [2];
  undefined1 local_3e8 [256];
  undefined1 local_2e8 [552];
  undefined8 local_c0 [13];
  undefined8 local_58 [7];
  
  puVar3 = local_58;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00416910(local_3e8,local_res18[0],0xff);
  lVar1 = FUN_013b3e30(param_1,local_3e8,3);
  if (lVar1 != 0) {
    FUN_013b49d0(param_1,lVar1,local_2e8);
    puVar3 = local_58;
    puVar4 = local_c0;
    for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_013b4b10(param_1,lVar1,local_2e8);
  }
  FUN_00414480(local_res18);
  return;
}

