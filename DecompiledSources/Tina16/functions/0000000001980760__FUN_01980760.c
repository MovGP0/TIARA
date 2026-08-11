/* Ghidra address: 01980760 */
/* Ghidra symbol: FUN_01980760 */


void FUN_01980760(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x10),param_2);
  uVar1 = FUN_01980680(param_1);
  if (iVar2 == -1) {
    FUN_004aec30(*(undefined8 *)(param_1 + 0x10),0,param_2);
  }
  else {
    FUN_004aed30(*(undefined8 *)(param_1 + 0x10),iVar2,0);
  }
  uVar3 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x10),uVar1);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  return;
}

