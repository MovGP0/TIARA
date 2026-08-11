/* Ghidra address: 015f06d0 */
/* Ghidra symbol: FUN_015f06d0 */


undefined8 FUN_015f06d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  FUN_010cbbf0(param_2,local_20,&local_28);
  FUN_010cc2f0(local_20[0],local_28,&local_30,
               CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2) & 0xffffffff);
  FUN_00414ad0(param_1,local_30);
  FUN_00414480(&local_30);
  return param_1;
}

