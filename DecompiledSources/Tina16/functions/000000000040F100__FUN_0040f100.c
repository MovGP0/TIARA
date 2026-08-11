/* Ghidra address: 0040f100 */
/* Ghidra symbol: FUN_0040f100 */


undefined8 FUN_0040f100(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0040c950(param_1);
  if (param_2 == 0) {
    local_28 = FUN_0040eb60(param_1,param_3);
  }
  else {
    if (*(short *)(param_1 + 0x2e8) == 0) {
      FUN_0040ea40(param_1);
    }
    if (*(short *)(param_1 + 0x2e8) == *(short *)(param_2 + -0xc)) {
      iVar1 = FUN_00414cd0(param_2);
      FUN_0040eb60(param_1,param_3 - iVar1);
      uVar2 = FUN_00415ab0(param_2);
      local_28 = FUN_0040eaa0(param_1,uVar2,iVar1);
    }
    else {
      FUN_00416880(local_20,param_2);
      local_28 = FUN_0040f220(param_1,local_20[0],param_3);
    }
  }
  FUN_00414480(local_20);
  return local_28;
}

