/* Ghidra address: 006dfcd0 */
/* Ghidra symbol: FUN_006dfcd0 */


void FUN_006dfcd0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_2d;
  int local_2c [3];
  
  local_2c[0] = 0;
  for (lVar1 = FUN_006df4b0(param_1); lVar1 != 0; lVar1 = FUN_006dd3e0(lVar1)) {
    local_2c[0] = local_2c[0] + 1;
  }
  local_2d = 4;
  FUN_004b89e0(param_2,&local_2d,1);
  FUN_004b89e0(param_2,local_2c,4);
  for (lVar1 = FUN_006df4b0(param_1); lVar1 != 0; lVar1 = FUN_006dd3e0(lVar1)) {
    FUN_006de900(lVar1,param_2);
  }
  return;
}

