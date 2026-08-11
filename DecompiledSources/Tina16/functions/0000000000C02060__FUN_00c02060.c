/* Ghidra address: 00c02060 */
/* Ghidra symbol: FUN_00c02060 */


void FUN_00c02060(longlong *param_1)

{
  char cVar1;
  undefined8 local_20;
  
  local_20 = FUN_00bb7750(1);
  (**(code **)(*param_1 + 0x2b8))(param_1,0,&local_20);
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 != '\0') {
    FUN_00bf3bb0(param_1);
  }
  *(undefined4 *)((longlong)param_1 + 0x4b4) = *(undefined4 *)((longlong)param_1 + 0x4c4);
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)((longlong)param_1 + 0x4cc);
  *(undefined8 *)((longlong)param_1 + 0x4bc) = *(undefined8 *)((longlong)param_1 + 0x4b4);
  FUN_00c03730(param_1,1,0);
  return;
}

