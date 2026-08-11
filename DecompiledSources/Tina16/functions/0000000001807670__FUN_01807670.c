/* Ghidra address: 01807670 */
/* Ghidra symbol: FUN_01807670 */


void FUN_01807670(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_004bf510(param_2);
  while( true ) {
    cVar1 = FUN_004be290(param_2);
    if (cVar1 != '\0') break;
    FUN_004c1ed0(param_2,local_20);
    FUN_004168e0(&local_28,local_20[0]);
    (**(code **)(*param_1 + 0x70))(param_1,local_28);
  }
  FUN_004bf520(param_2);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

