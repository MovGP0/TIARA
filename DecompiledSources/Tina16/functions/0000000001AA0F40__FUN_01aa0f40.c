/* Ghidra address: 01aa0f40 */
/* Ghidra symbol: FUN_01aa0f40 */


undefined8 FUN_01aa0f40(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 local_a0 [2];
  undefined1 local_89 [81];
  undefined1 local_38 [32];
  
  local_a0[0] = 0;
  local_a8 = 0;
  local_89[0] = 0;
  FUN_01aa0b90(param_2,local_38);
  if (0 < param_3) {
    puVar1 = local_38;
    do {
      FUN_0043f750(local_a0,*puVar1);
      FUN_004169a0(&local_a8,local_89);
      FUN_00416ad0(local_a0,local_a8);
      FUN_00416910(local_1a8,local_a0[0],0xff);
      FUN_00415020(local_89,local_1a8,0x50);
      puVar1 = puVar1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00415020(param_1,local_89,0x50);
  FUN_00414560(&local_a8,2);
  return param_1;
}

