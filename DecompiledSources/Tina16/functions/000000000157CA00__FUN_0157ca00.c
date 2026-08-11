/* Ghidra address: 0157ca00 */
/* Ghidra symbol: FUN_0157ca00 */


void FUN_0157ca00(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_res10[0],0,param_3);
  if (iVar1 != param_3) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020023a8);
    FUN_004133b0(uVar2,unaff_retaddr);
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}

