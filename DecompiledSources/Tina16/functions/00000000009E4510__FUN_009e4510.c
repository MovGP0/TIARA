/* Ghidra address: 009e4510 */
/* Ghidra symbol: FUN_009e4510 */


undefined8 FUN_009e4510(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_0045ae90();
  FUN_00459ca0(uVar1,local_20,param_3);
  lVar2 = 0;
  if (local_20[0] != 0) {
    lVar2 = *(longlong *)(local_20[0] + -8);
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,local_20[0],lVar2 + -1);
  FUN_00419430(local_20,&DAT_00406578);
  return param_2;
}

