/* Ghidra address: 009d4de0 */
/* Ghidra symbol: FUN_009d4de0 */


undefined8 FUN_009d4de0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(*param_3 + 0x180))(param_3,local_20);
  iVar1 = FUN_00416420(local_20[0],0);
  if (iVar1 == 0) {
    (**(code **)(*param_3 + 0x150))(param_3,&local_28);
    FUN_004168b0(param_2,local_28);
  }
  else {
    lVar2 = (**(code **)(*param_3 + 0x170))(param_3);
    if (lVar2 == 0) {
      FUN_00414480(param_2);
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0x170))(param_3);
      FUN_009d4de0(param_1,param_2,uVar3);
    }
  }
  FUN_004145c0(&local_28,2);
  return param_2;
}

