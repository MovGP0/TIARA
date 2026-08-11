/* Ghidra address: 015bf910 */
/* Ghidra symbol: FUN_015bf910 */


undefined1 FUN_015bf910(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined1 local_9;
  
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414650(&local_res8);
  FUN_00415530(local_20,local_res8,0);
  FUN_00415f40(&local_28,local_20[0]);
  iVar1 = FUN_00416420(local_28,local_res8);
  local_9 = iVar1 != 0;
  if ((bool)local_9) {
    FUN_0041d940(local_128,local_res8);
    FUN_004154b0(local_res10,local_128,0);
  }
  else {
    FUN_00415530(local_res10,local_res8,0);
  }
  FUN_00414520(&local_28);
  FUN_004144d0(local_20);
  FUN_00414520(&local_res8);
  return local_9;
}

