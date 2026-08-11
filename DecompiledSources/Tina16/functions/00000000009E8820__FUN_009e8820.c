/* Ghidra address: 009e8820 */
/* Ghidra symbol: FUN_009e8820 */


void FUN_009e8820(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_30 = 0;
  FUN_004be030(param_2,1);
  FUN_009e76c0(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  while( true ) {
    cVar1 = FUN_004be290(param_2);
    if (cVar1 != '\0') break;
    FUN_004c1ed0(param_2,&local_28);
    FUN_004168e0(&local_30,local_28);
    (**(code **)(*param_1 + 0x70))(param_1,local_30);
  }
  FUN_009e77f0(param_1);
  FUN_004be030(param_2,0);
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  return;
}

