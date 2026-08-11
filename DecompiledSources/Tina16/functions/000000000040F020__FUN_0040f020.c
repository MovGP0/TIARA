/* Ghidra address: 0040f020 */
/* Ghidra symbol: FUN_0040f020 */


longlong FUN_0040f020(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0040c950(param_1);
  local_28 = param_1;
  if (param_2 != 0) {
    if (*(short *)(param_1 + 0x2e8) == 0) {
      FUN_0040ea40(param_1);
    }
    if (*(short *)(param_1 + 0x2e8) == *(short *)(param_2 + -0xc)) {
      uVar2 = FUN_00415ab0(param_2);
      uVar1 = FUN_00414cd0(param_2);
      local_28 = FUN_0040eaa0(param_1,uVar2,uVar1);
    }
    else {
      FUN_00416880(local_20,param_2);
      local_28 = FUN_0040f200(param_1,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return local_28;
}

