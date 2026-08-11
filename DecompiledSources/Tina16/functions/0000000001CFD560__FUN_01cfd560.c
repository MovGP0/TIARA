/* Ghidra address: 01cfd560 */
/* Ghidra symbol: FUN_01cfd560 */


void FUN_01cfd560(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_4a [12];
  undefined8 local_31;
  undefined2 local_29 [12];
  longlong local_10;
  
  FUN_00417580(local_29,&DAT_01d36af8);
  FUN_00417580(local_4a,&DAT_01d36af8);
  local_4a[0] = *(undefined2 *)(param_1 + 0xba);
  local_31 = *(undefined8 *)(param_1 + 0xc0);
  local_29[0] = local_4a[0];
  local_10 = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    FUN_01d396b0(local_4a,param_3,param_4);
    FUN_01d382c0(local_29,local_4a,param_3,param_4);
  }
  FUN_00417840(local_4a,&DAT_01d36af8,2);
  return;
}

