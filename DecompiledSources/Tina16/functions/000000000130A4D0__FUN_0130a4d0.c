/* Ghidra address: 0130a4d0 */
/* Ghidra symbol: FUN_0130a4d0 */


undefined8 FUN_0130a4d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_012e6020(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0xdc));
  if (iVar1 == 1) {
    FUN_012dd160(*(undefined8 *)(param_1 + 0xd0),param_2,L"PARAMETER_SYMBOL",
                 *(undefined4 *)(param_1 + 0xdc));
  }
  else {
    iVar1 = FUN_012e6020(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0xdc));
    if (iVar1 == 2) {
      uVar2 = FUN_012e5710(*(undefined8 *)(param_1 + 0x138));
      uVar3 = FUN_012e5ac0(*(undefined8 *)(param_1 + 0x138),2,*(undefined4 *)(param_1 + 0xdc));
      FUN_013028b0(*(undefined8 *)PTR_DAT_02002f98,param_2,*(undefined8 *)(param_1 + 200),uVar2,
                   uVar3);
    }
  }
  return param_2;
}

