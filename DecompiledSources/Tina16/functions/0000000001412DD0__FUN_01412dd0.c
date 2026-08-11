/* Ghidra address: 01412dd0 */
/* Ghidra symbol: FUN_01412dd0 */


void FUN_01412dd0(longlong param_1,longlong *param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *(longlong **)(param_1 + 0x740) = param_2;
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020052a8,&DAT_01412e84,L"temp.asm");
  (**(code **)(*param_2 + 0x100))(param_2,local_20[0]);
  FUN_010a8360(*(undefined8 *)(param_1 + 0x6f0),local_20[0]);
  FUN_00414480(local_20);
  return;
}

