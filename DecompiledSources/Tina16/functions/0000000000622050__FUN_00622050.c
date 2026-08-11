/* Ghidra address: 00622050 */
/* Ghidra symbol: FUN_00622050 */


undefined4
FUN_00622050(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_004168e0(&local_10,param_1);
  FUN_004168e0(&local_18,param_3);
  uVar1 = FUN_00620f50(local_10,param_2,param_5,param_4,0,local_18);
  FUN_004145c0(&local_18,2);
  return uVar1;
}

