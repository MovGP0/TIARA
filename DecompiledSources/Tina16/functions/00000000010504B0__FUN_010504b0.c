/* Ghidra address: 010504b0 */
/* Ghidra symbol: FUN_010504b0 */


void FUN_010504b0(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = param_2 == 1;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar5);
  bVar6 = param_3 == 2;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar6);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x778),uVar3 & 0xffffffff);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x780),uVar3 & 0xffffffff);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x788),uVar3 & 0xffffffff);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x790),uVar3 & 0xffffffff);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x798),uVar3 & 0xffffffff);
  uVar2 = FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x7a0),uVar3 & 0xffffffff);
  if ((!bVar6) || (bVar5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  uVar2 = FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x6f0),uVar1);
  if ((!bVar6) || (bVar5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x6f8),uVar1);
  uVar2 = FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x700),uVar4 & 0xffffffff);
  if ((!bVar6) || (bVar5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  uVar2 = FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x760),uVar1);
  if ((!bVar6) || (bVar5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  uVar2 = FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x7b8),uVar1);
  if ((!bVar6) || (bVar5)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x7c8),uVar1);
  FUN_01050340(param_1,*(undefined8 *)(param_1 + 0x7d8),uVar3 & 0xffffffff);
  FUN_010503a0(param_1,uVar4 & 0xffffffff,uVar3 & 0xffffffff);
  return;
}

