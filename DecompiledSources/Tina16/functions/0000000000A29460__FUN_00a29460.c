/* Ghidra address: 00a29460 */
/* Ghidra symbol: FUN_00a29460 */


longlong * FUN_00a29460(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00a29300(&local_10,param_2);
  FUN_0043ea00(param_1,local_10);
  if ((*param_1 != 0) && (param_3 != 0)) {
    iVar1 = FUN_004170c0(&DAT_00a29544,*param_1,1);
    if (iVar1 != 1) {
      iVar1 = FUN_004170c0(&LAB_00a29558,*param_1,1);
      if ((iVar1 != 2) && (*(short *)*param_1 == 0x5c)) {
        FUN_00416ba0(param_1,param_3,*param_1);
      }
    }
  }
  FUN_00414480(&local_10);
  return param_1;
}

