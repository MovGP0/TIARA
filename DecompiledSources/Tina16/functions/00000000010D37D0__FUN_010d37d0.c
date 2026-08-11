/* Ghidra address: 010d37d0 */
/* Ghidra symbol: FUN_010d37d0 */


void FUN_010d37d0(longlong param_1,ushort param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)(uint)param_2 <= *(int *)(param_1 + 0x10) + -1) {
    lVar1 = FUN_00b94e60();
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_3 = *puVar3;
      puVar3 = puVar3 + 1;
      param_3 = param_3 + 1;
    }
  }
  return;
}

