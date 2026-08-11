/* Ghidra address: 01a43030 */
/* Ghidra symbol: FUN_01a43030 */


void FUN_01a43030(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  
  local_40 = auStack_68;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_38 = *(longlong *)(param_1 + 0x2bc8);
  (**(code **)(**(longlong **)(local_38 + 200) + 0x90))(*(longlong **)(local_38 + 200));
  FUN_013bb8f0(local_38);
  FUN_010563e0(local_res10[0],*(undefined8 *)(local_38 + 0x108),param_1 + 0x7b8);
  FUN_00414480(local_res10);
  return;
}

