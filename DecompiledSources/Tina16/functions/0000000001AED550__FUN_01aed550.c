/* Ghidra address: 01aed550 */
/* Ghidra symbol: FUN_01aed550 */


void FUN_01aed550(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416cd0(&local_10,3,L"[MacroEvent(1100,",local_res10[0],&LAB_01aed634);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_013a40d0(*(undefined8 *)PTR_DAT_020032b8,&local_10);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

