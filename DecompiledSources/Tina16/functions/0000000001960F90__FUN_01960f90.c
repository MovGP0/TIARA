/* Ghidra address: 01960f90 */
/* Ghidra symbol: FUN_01960f90 */


void FUN_01960f90(longlong *param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x348))(param_1,local_20);
  FUN_00414b90(param_1 + 0x72,local_20[0]);
  *(ushort *)((longlong)param_1 + 0x38c) = *(ushort *)((longlong)param_1 + 0x38c) & 0xffef;
  *(ushort *)((longlong)param_1 + 0x38c) = *(ushort *)((longlong)param_1 + 0x38c) & 0xffdf;
  FUN_00414520(local_20);
  return;
}

