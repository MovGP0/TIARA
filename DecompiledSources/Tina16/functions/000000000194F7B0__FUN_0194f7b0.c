/* Ghidra address: 0194f7b0 */
/* Ghidra symbol: FUN_0194f7b0 */


void FUN_0194f7b0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_48 = param_3;
  (**(code **)(*param_2 + 0x1c8))(param_2,local_20,1,1);
  FUN_004b6dc0(local_20,0);
  (**(code **)(*param_1 + 0x1c0))(param_1,local_20);
  FUN_00410f20(local_20);
  return;
}

