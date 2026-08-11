/* Ghidra address: 006dfe00 */
/* Ghidra symbol: FUN_006dfe00 */


void FUN_006dfe00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 local_1d;
  undefined4 local_1c;
  
  local_1c = FUN_006decb0(param_1);
  FUN_004b89e0(param_2,&local_1c,4);
  for (lVar1 = FUN_006df4b0(param_1); lVar1 != 0; lVar1 = FUN_006dd600(lVar1)) {
    local_1d = FUN_006dd0b0(lVar1);
    FUN_004b89e0(param_2,&local_1d,1);
  }
  return;
}

