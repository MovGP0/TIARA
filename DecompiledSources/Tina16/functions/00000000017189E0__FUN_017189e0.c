/* Ghidra address: 017189e0 */
/* Ghidra symbol: FUN_017189e0 */


void FUN_017189e0(longlong param_1,byte *param_2,byte *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 auStack_238 [32];
  byte local_218 [256];
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_218;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  lVar1 = (ulonglong)*param_3 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_3;
    param_3 = param_3 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_01718360(auStack_238,*(undefined8 *)(param_1 + 0x10),0);
  FUN_01718360(auStack_238,*(undefined8 *)(param_1 + 0x18),1);
  FUN_01718360(auStack_238,*(undefined8 *)(param_1 + 0x20),2);
  FUN_01718360(auStack_238,*(undefined8 *)(param_1 + 0x28),3);
  FUN_01718360(auStack_238,*(undefined8 *)(param_1 + 0x30),4);
  return;
}

