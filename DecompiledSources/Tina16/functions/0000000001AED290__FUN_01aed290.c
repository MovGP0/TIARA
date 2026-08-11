/* Ghidra address: 01aed290 */
/* Ghidra symbol: FUN_01aed290 */


undefined8
FUN_01aed290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aed0b0(param_1,&local_10,param_2,param_3,param_4);
  uVar1 = FUN_00410100(local_10,&local_14);
  if (local_14 != 0) {
    *param_4 = 2;
  }
  FUN_00414480(&local_10);
  return uVar1;
}

