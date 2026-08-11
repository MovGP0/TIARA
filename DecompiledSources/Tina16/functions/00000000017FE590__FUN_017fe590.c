/* Ghidra address: 017fe590 */
/* Ghidra symbol: FUN_017fe590 */


undefined1 FUN_017fe590(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x38))(param_2,local_20);
  FUN_00415dd0(&local_28,local_20[0],0);
  uVar1 = FUN_017fe450(param_1,local_28,param_3,param_4);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  return uVar1;
}

