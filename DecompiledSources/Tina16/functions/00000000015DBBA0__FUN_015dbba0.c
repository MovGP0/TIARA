/* Ghidra address: 015dbba0 */
/* Ghidra symbol: FUN_015dbba0 */


void FUN_015dbba0(longlong param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  int local_res10;
  int local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  if (param_2 < 0) {
    local_res10 = 0;
  }
  FUN_015d9080(param_1,param_3,local_res10,0);
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x1e0) == 0) {
    if (*(char *)(param_1 + 0x103) == '\x01') {
      FUN_0041ddd0(&local_28,PTR_PTR_02002390);
      local_38[0] = local_res10 + 1;
      local_30 = 0;
      FUN_00442f70(local_20,local_28,local_38,0);
      iVar1 = FUN_0072d440(local_20[0],3,0xc,0);
      *param_4 = iVar1 != 1;
    }
    else {
      *param_4 = 0;
    }
  }
  else {
    (**(code **)(param_1 + 0x1e0))
              (*(undefined8 *)(param_1 + 0x1e8),param_1,local_res10 + 1,param_3,param_4);
  }
  FUN_00414560(&local_28,2);
  return;
}

