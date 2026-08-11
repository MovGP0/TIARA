/* Ghidra address: 017e19f0 */
/* Ghidra symbol: FUN_017e19f0 */


void FUN_017e19f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_2b8 [83];
  
  puVar3 = local_2b8;
  for (lVar2 = 0x52; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_013b26e0(0,&PTR_FUN_013b25b8,local_2b8);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  return;
}

