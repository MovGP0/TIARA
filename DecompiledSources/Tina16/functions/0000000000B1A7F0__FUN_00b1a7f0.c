/* Ghidra address: 00b1a7f0 */
/* Ghidra symbol: FUN_00b1a7f0 */


void FUN_00b1a7f0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_20;
  
  local_20 = 0;
  (**(code **)(*param_1 + 8))(param_1,param_2,&local_20);
  uVar2 = FUN_00414df0(&local_20);
  uVar1 = 0;
  if (local_20 != 0) {
    uVar1 = *(undefined4 *)(local_20 + -4);
  }
  uVar1 = FUN_00b1a7a0(param_1,uVar2,uVar1);
  lVar3 = FUN_004aeac0(param_1[1],uVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_004aedb0(param_1[1],uVar1,lVar3);
  }
  FUN_004ae7e0(lVar3,param_2);
  FUN_004144d0(&local_20);
  return;
}

