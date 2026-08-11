/* Ghidra address: 00d00dc0 */
/* Ghidra symbol: FUN_00d00dc0 */


void FUN_00d00dc0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined1 local_18 [8];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0x170))(param_1,L"HEAD",local_res10[0],0,0,local_18,0xffffffff);
  FUN_00414480(local_res10);
  return;
}

