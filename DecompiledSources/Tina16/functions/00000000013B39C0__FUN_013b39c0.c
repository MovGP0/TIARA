/* Ghidra address: 013b39c0 */
/* Ghidra symbol: FUN_013b39c0 */


void FUN_013b39c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_2e8;
  undefined4 local_2e7;
  undefined8 local_c0 [13];
  undefined8 local_58 [7];
  
  puVar3 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_58;
  puVar4 = local_c0;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_2e7 = 0x53595303;
  local_2e8 = 4;
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,&local_2e8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

