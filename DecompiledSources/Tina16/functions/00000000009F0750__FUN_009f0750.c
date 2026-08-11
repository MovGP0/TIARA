/* Ghidra address: 009f0750 */
/* Ghidra symbol: FUN_009f0750 */


void FUN_009f0750(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x18) == 0x7149) {
    puVar2 = (undefined8 *)PTR_DAT_02005a68;
    puVar3 = (undefined8 *)(param_1 + 0x20);
    for (lVar1 = 0x40; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

