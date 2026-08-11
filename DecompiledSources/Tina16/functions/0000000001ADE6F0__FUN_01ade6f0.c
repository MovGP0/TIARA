/* Ghidra address: 01ade6f0 */
/* Ghidra symbol: FUN_01ade6f0 */


void FUN_01ade6f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x90),param_2);
  if (iVar2 == -1) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = FUN_004aeba0(uVar1,param_2);
    FUN_004ae870(uVar1,uVar3);
    FUN_01cc6030(param_2);
  }
  return;
}

