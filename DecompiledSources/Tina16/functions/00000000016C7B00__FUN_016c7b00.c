/* Ghidra address: 016c7b00 */
/* Ghidra symbol: FUN_016c7b00 */


undefined8 FUN_016c7b00(longlong param_1,byte *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined4 local_12c;
  byte local_128 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa20),local_128,&local_12c);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa20),local_12c);
  }
  return uVar2;
}

