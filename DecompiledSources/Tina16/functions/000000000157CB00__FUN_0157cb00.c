/* Ghidra address: 0157cb00 */
/* Ghidra symbol: FUN_0157cb00 */


void FUN_0157cb00(longlong *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res10,param_3);
  if (iVar1 != param_3) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020023a8);
    FUN_004133b0(uVar2,unaff_retaddr);
  }
  return;
}

