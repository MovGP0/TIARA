/* Ghidra address: 007e8f20 */
/* Ghidra symbol: FUN_007e8f20 */


bool FUN_007e8f20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_007e8d80(local_20,param_1);
  uVar1 = local_20[0];
  FUN_007e8d80(&local_28,param_2);
  iVar2 = FUN_0043e6d0(uVar1,local_28);
  FUN_00414560(&local_28,2);
  return iVar2 == 0;
}

