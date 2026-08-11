/* Ghidra address: 00413e70 */
/* Ghidra symbol: FUN_00413e70 */


void FUN_00413e70(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_108 [30];
  
  puVar2 = param_1 + 7;
  puVar3 = local_108;
  for (lVar1 = 0x1e; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)*param_1;
  for (lVar1 = 0x25; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  bVar4 = DAT_01db9000 != 0;
  DAT_01db9000 = 0;
  FUN_00413e00(local_108,bVar4 + '\x01');
  return;
}

