/* Ghidra address: 01cf0680 */
/* Ghidra symbol: FUN_01cf0680 */


void FUN_01cf0680(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_01d31a40(*param_2);
  if (iVar2 == 0) {
    sVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (sVar1 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x28))(param_1,*param_2);
      uVar5 = (**(code **)(*param_1 + 0x30))(param_1,*param_2);
      FUN_01d31180(*param_2,uVar3,uVar4,uVar5);
      (**(code **)(*param_1 + 0x38))(param_1,param_2);
    }
  }
  return;
}

