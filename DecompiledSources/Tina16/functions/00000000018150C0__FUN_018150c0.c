/* Ghidra address: 018150c0 */
/* Ghidra symbol: FUN_018150c0 */


undefined8 FUN_018150c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0x18));
  FUN_00416ba0(param_2,L"frxUIN",local_10);
  FUN_00414480(&local_10);
  return param_2;
}

