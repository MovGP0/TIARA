/* Ghidra address: 01ca0d40 */
/* Ghidra symbol: FUN_01ca0d40 */


void FUN_01ca0d40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_01ca0d90(param_1,param_2);
  if (iVar2 != -1) {
    uVar1 = *(undefined8 *)(param_1 + 0x2500);
    uVar3 = FUN_004aeba0(uVar1,param_2);
    FUN_004ae870(uVar1,uVar3);
    FUN_004aee80(*(undefined8 *)(param_1 + 0x2500));
  }
  return;
}

