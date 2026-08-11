/* Ghidra address: 015f7450 */
/* Ghidra symbol: FUN_015f7450 */


undefined8 FUN_015f7450(longlong *param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = 0;
  if (((param_3 & 1) != 0) && (uVar1 = local_20[0], (param_3 & 2) != 0)) {
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2 + 1,local_20);
    uVar1 = local_20[0];
  }
  return uVar1;
}

