/* Ghidra address: 010d3670 */
/* Ghidra symbol: FUN_010d3670 */


void FUN_010d3670(longlong param_1,ushort param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_58 [7];
  
  puVar3 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((int)(uint)param_2 <= *(int *)(param_1 + 0x10) + -1) {
    lVar2 = FUN_00b94e60(param_1);
    uVar1 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
    *(undefined8 *)(lVar2 + 0x10) = uVar1;
    FUN_013b39c0(uVar1,local_58);
  }
  return;
}

