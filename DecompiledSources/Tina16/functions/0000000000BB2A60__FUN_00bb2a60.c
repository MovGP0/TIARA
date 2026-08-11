/* Ghidra address: 00bb2a60 */
/* Ghidra symbol: FUN_00bb2a60 */


void FUN_00bb2a60(longlong *param_1,longlong *param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,0);
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  FUN_00416cd0(local_20,3,L"<!DOCTYPE ",local_28,&DAT_00bb2b4c);
  (**(code **)(*param_2 + 0x90))(param_2,local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

