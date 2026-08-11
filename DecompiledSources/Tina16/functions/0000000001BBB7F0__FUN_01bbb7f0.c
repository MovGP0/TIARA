/* Ghidra address: 01bbb7f0 */
/* Ghidra symbol: FUN_01bbb7f0 */


void FUN_01bbb7f0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_a8 [18];
  
  puVar3 = local_a8;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined4 *)(lVar1 + 0x10) = param_2;
  puVar3 = local_a8;
  puVar4 = (undefined8 *)(lVar1 + 0x20);
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

