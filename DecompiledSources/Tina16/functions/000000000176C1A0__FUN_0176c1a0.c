/* Ghidra address: 0176c1a0 */
/* Ghidra symbol: FUN_0176c1a0 */


void FUN_0176c1a0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  uint local_48;
  undefined1 *local_30;
  longlong local_20 [2];
  
  local_30 = auStack_68;
  local_48 = local_48 & 0xffffff00;
  local_20[0] = FUN_01d30b30(&DAT_01d2e8e8,1,param_3,1);
  *(undefined1 *)(local_20[0] + 0x78) = param_2;
  local_48 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,local_20,0,0);
  FUN_00410f20(local_20[0]);
  return;
}

