/* Ghidra address: 00de67d0 */
/* Ghidra symbol: FUN_00de67d0 */


void FUN_00de67d0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 *local_38;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_50 = auStack_78;
  local_28 = 0;
  local_20 = 0;
  local_38 = (undefined8 *)(param_1 + 8);
  local_40 = *local_38;
  *local_38 = 0;
  FUN_00410f20(local_40);
  local_18 = FUN_004baeb0(&PTR_FUN_0047f878,1,param_2,0x1000);
  local_2a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_004c1d40(local_18);
  FUN_00de66b0(auStack_78,0);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_2a;
  FUN_00410f20(local_18);
  FUN_00414560(&local_28,2);
  return;
}

