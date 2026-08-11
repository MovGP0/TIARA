/* Ghidra address: 004484b0 */
/* Ghidra symbol: FUN_004484b0 */


undefined8 FUN_004484b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined8 local_res10 [3];
  undefined1 local_98 [136];
  
  local_res10[0] = param_2;
  uVar1 = FUN_004462b0(local_98,local_res10,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                       0,0,0,param_3);
  FUN_00414740(param_1,local_98,uVar1);
  return param_1;
}

