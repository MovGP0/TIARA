/* Ghidra address: 01ba1140 */
/* Ghidra symbol: FUN_01ba1140 */


undefined8 FUN_01ba1140(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = *param_2;
  local_18 = FUN_01ba1040(&local_10);
  FUN_00416780(&local_20,(int)local_18 + 0x61);
  FUN_00416780(&local_28,local_18._4_4_ + 0x30);
  FUN_00416ba0(param_1,local_20,local_28);
  FUN_00414560(&local_28,2);
  return param_1;
}

