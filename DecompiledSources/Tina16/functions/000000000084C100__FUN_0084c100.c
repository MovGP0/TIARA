/* Ghidra address: 0084c100 */
/* Ghidra symbol: FUN_0084c100 */


void FUN_0084c100(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  for (iVar1 = FUN_004c06c0(param_2); 0 < iVar1; iVar1 = iVar1 + -1) {
    uVar2 = FUN_004c06c0(param_2);
    FUN_004c1ed0(param_2,&local_20);
    (**(code **)(*param_1 + 0xd0))(param_1,uVar2,local_20,0);
  }
  FUN_00414480(&local_20);
  return;
}

