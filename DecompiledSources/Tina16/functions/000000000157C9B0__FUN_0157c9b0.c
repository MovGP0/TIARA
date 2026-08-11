/* Ghidra address: 0157c9b0 */
/* Ghidra symbol: FUN_0157c9b0 */


void FUN_0157c9b0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if (iVar1 != param_3) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02003e30);
    FUN_004133b0(uVar2,unaff_retaddr);
  }
  return;
}

