/* Ghidra address: 0139fbf0 */
/* Ghidra symbol: FUN_0139fbf0 */


undefined8
FUN_0139fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  int local_14;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0139f970(param_1,&local_10,param_2,param_3,param_4);
  uVar1 = FUN_00410100(local_10,&local_14);
  if (local_14 != 0) {
    *param_4 = 2;
  }
  FUN_00414480(&local_10);
  return uVar1;
}

