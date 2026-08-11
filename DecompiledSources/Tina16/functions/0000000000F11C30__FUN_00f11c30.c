/* Ghidra address: 00f11c30 */
/* Ghidra symbol: FUN_00f11c30 */


void FUN_00f11c30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_38 [6];
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  FUN_00f11460(param_1,local_38);
  FUN_00f11460(param_1,local_48);
  local_50 = FUN_00498310(local_38[0],local_44);
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,&local_50,param_3);
  return;
}

