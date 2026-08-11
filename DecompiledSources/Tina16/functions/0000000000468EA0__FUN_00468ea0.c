/* Ghidra address: 00468ea0 */
/* Ghidra symbol: FUN_00468ea0 */


void FUN_00468ea0(short *param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  if (*param_1 == 0x102) {
    FUN_00467e90(&local_10,param_1);
    FUN_00467e90(&local_18,param_2);
    FUN_00416ad0(&local_10,local_18);
    FUN_00468a10(param_1,local_10);
  }
  else if (*param_1 == 0x100) {
    FUN_00466730(&local_20,param_1,0);
    FUN_00466730(&local_28,param_2,0);
    FUN_004155b0(&local_20,local_28);
    FUN_00468910(param_1,local_20);
  }
  else {
    FUN_00467310(&local_30,param_1);
    FUN_00467310(&local_38,param_2);
    FUN_00415f90(&local_30,local_38);
    FUN_004689d0(param_1,local_30);
  }
  FUN_004145c0(&local_38,2);
  FUN_00414590(&local_28,2);
  FUN_00414560(&local_18,2);
  return;
}

