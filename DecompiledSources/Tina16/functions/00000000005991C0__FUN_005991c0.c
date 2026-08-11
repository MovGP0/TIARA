/* Ghidra address: 005991c0 */
/* Ghidra symbol: FUN_005991c0 */


void FUN_005991c0(longlong *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int local_res10;
  undefined1 auStack_488 [40];
  undefined1 *local_460;
  longlong local_448;
  int local_43c;
  longlong local_438;
  longlong local_430;
  undefined1 *local_428;
  undefined1 local_420 [1024];
  undefined1 *local_20;
  
  local_460 = auStack_488;
  if ((((param_2 < 0) || (param_3 < 0)) || ((int)param_1[1] < param_2 + param_3)) ||
     (puVar1 = auStack_488, param_2 + param_3 < 0)) {
    FUN_00594f90();
    puVar1 = local_460;
  }
  local_460 = puVar1;
  if (0 < param_3) {
    local_448 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
    local_428 = (undefined1 *)0x0;
    local_20 = (undefined1 *)0x0;
    local_438 = param_3 * local_448;
    if (param_1[4] != 0) {
      if (local_438 < 0x401) {
        local_428 = local_420;
      }
      else {
        local_428 = (undefined1 *)FUN_004095c0(local_438);
        local_20 = local_428;
      }
      FUN_00409a70(*param_1 + param_2 * local_448,local_428,local_438);
    }
    local_430 = (longlong)((int)param_1[1] - (param_2 + param_3));
    local_res10 = param_2;
    if (0 < local_430) {
      FUN_00409a70(*param_1 + (param_2 + param_3) * local_448,*param_1 + param_2 * local_448,
                   local_430 * local_448);
      local_res10 = param_2 + (int)local_430;
    }
    FUN_0040d200(*param_1 + local_res10 * local_448,local_438,0);
    *(int *)(param_1 + 1) = (int)param_1[1] - param_3;
    if ((param_1[4] != 0) && (local_43c = 0, -1 < param_3 + -1)) {
      do {
        (*(code *)param_1[4])(param_1[3],local_428 + local_43c * local_448,5);
        local_43c = local_43c + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (param_1[4] != 0) {
      FUN_004095f0(local_20);
    }
  }
  return;
}

