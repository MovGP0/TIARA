/* Ghidra address: 00ad68a0 */
/* Ghidra symbol: FUN_00ad68a0 */


int FUN_00ad68a0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (param_2 < iVar1) break;
    FUN_00417320(&local_28,0x6f,*(undefined4 *)(*(longlong *)(param_1[0xf] + 0xd8) + 0x10));
    FUN_009ec420(local_20,local_28);
    (**(code **)(*param_1 + 0x78))(param_1,local_20[0]);
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_30,param_2);
  iVar1 = FUN_004170c0(&LAB_00ad6998,local_30,1);
  FUN_00414560(&local_30,3);
  return iVar1 + -1;
}

