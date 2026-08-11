/* Ghidra address: 014385d0 */
/* Ghidra symbol: FUN_014385d0 */


void FUN_014385d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_960 [296];
  
  puVar2 = local_960;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  FUN_00417c40(param_1 + 0x500,local_960,&DAT_01d0d0b8);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 0xa3d));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0xa45));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x4e8),(longlong)*(short *)(param_1 + 0xa4d));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x4f0),*(undefined1 *)(param_1 + 0xa4f));
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

