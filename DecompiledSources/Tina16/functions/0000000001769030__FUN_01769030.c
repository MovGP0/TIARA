/* Ghidra address: 01769030 */
/* Ghidra symbol: FUN_01769030 */


void FUN_01769030(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_01d31a40(*param_2);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1,*param_2);
    uVar4 = (**(code **)(*param_1 + 0x58))(param_1,*param_2);
    FUN_01d31180(*param_2,uVar2,uVar3,uVar4);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
  return;
}

