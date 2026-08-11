/* Ghidra address: 006e45c0 */
/* Ghidra symbol: FUN_006e45c0 */


void FUN_006e45c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_006e03a0(&PTR_FUN_006dff58,1,*(undefined8 *)(param_1 + 0x550));
  FUN_006e07e0(local_10,param_2,param_3);
  FUN_00410f20(local_10);
  return;
}

