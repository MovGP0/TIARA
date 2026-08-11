/* Ghidra address: 006aa320 */
/* Ghidra symbol: FUN_006aa320 */


void FUN_006aa320(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
  FUN_0064dd90(uVar1,local_20);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,0 < iVar2);
  FUN_00414480(local_20);
  return;
}

