/* Ghidra address: 016d2470 */
/* Ghidra symbol: FUN_016d2470 */


void FUN_016d2470(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int local_30;
  int local_2c;
  
  FUN_00409a70(&WAVE_01f94988,param_1,0x2c);
  local_2c = param_4 * param_5;
  FUN_00409a70(&local_2c,param_1 + 0x20,1);
  local_30 = local_2c * param_3;
  FUN_00409a70(&local_30,param_1 + 0x1c,4);
  local_30 = param_3;
  FUN_00409a70(&local_30,param_1 + 0x18,4);
  local_30 = param_4 * 8;
  FUN_00409a70(&local_30,param_1 + 0x22,1);
  local_30 = param_5;
  FUN_00409a70(&local_30,param_1 + 0x16,1);
  local_2c = local_2c * param_2;
  FUN_00409a70(&local_2c,param_1 + 0x28,4);
  local_2c = local_2c + 0x24;
  FUN_00409a70(&local_2c,param_1 + 4,4);
  return;
}

