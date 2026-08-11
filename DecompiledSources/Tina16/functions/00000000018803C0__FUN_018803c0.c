/* Ghidra address: 018803c0 */
/* Ghidra symbol: FUN_018803c0 */


undefined8 FUN_018803c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = (undefined8 *)FUN_0187fd40(param_1);
  FUN_004169a0(&local_10,*(longlong *)*puVar1 + 1);
  FUN_00416cd0(param_2,3,&DAT_01880454,local_10,&LAB_01880464);
  FUN_00414480(&local_10);
  return param_2;
}

