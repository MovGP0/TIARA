/* Ghidra address: 010d35f0 */
/* Ghidra symbol: FUN_010d35f0 */


void FUN_010d35f0(longlong param_1,ushort param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_48 [6];
  
  puVar3 = local_48;
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((int)(uint)param_2 <= *(int *)(param_1 + 0x10) + -1) {
    lVar1 = FUN_00b94e60(param_1);
    puVar3 = local_48;
    puVar4 = (undefined8 *)(lVar1 + 0x10);
    for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

