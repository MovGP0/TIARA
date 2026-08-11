/* Ghidra address: 009dd570 */
/* Ghidra symbol: FUN_009dd570 */


void FUN_009dd570(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x160))(param_2,&local_28);
    FUN_009474c0(local_20,local_28);
    iVar1 = FUN_00416420(local_20[0],0);
    if (iVar1 == 0) {
      FUN_00410f20(param_2);
    }
  }
  FUN_004145c0(&local_28,2);
  return;
}

