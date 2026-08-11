/* Ghidra address: 0157c8d0 */
/* Ghidra symbol: FUN_0157c8d0 */


void FUN_0157c8d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 unaff_retaddr;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  iVar2 = FUN_004b72d0(param_1,local_res10,param_3);
  if (iVar2 != param_3) {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02003e30);
    FUN_004133b0(uVar1,unaff_retaddr);
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}

