/* Ghidra address: 01166f10 */
/* Ghidra symbol: FUN_01166f10 */


void FUN_01166f10(undefined8 param_1,int param_2,int param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != DAT_0203d998) || (param_3 != DAT_0203d99c)) {
    if (DAT_0203d978 == 0) {
      FUN_0043f750(&local_10,DAT_0203d998);
      FUN_00414ad0(&DAT_0203d980,local_10);
      FUN_00416cd0(&DAT_0203d978,3,DAT_0203d978,DAT_0203d980,&LAB_011670e8);
      FUN_0043f750(&local_18,DAT_0203d99c);
      FUN_00414ad0(&DAT_0203d980,local_18);
      FUN_00416cd0(&DAT_0203d978,3,DAT_0203d978,DAT_0203d980,&LAB_011670e8);
    }
    FUN_0043f750(&local_20,param_2);
    FUN_00414ad0(&DAT_0203d980,local_20);
    FUN_00416cd0(&DAT_0203d978,3,DAT_0203d978,DAT_0203d980,&LAB_011670e8);
    FUN_0043f750(&local_28,param_3);
    FUN_00414ad0(&DAT_0203d980,local_28);
    FUN_00416cd0(&DAT_0203d978,3,DAT_0203d978,DAT_0203d980,&LAB_011670e8);
  }
  DAT_0203d998 = param_2;
  DAT_0203d99c = param_3;
  FUN_00414560(&local_28,4);
  return;
}

