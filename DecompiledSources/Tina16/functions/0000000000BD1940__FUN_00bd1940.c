/* Ghidra address: 00bd1940 */
/* Ghidra symbol: FUN_00bd1940 */


undefined8 FUN_00bd1940(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 local_58 [20];
  int local_44;
  int local_38;
  byte local_25;
  int local_20;
  undefined4 uStack_1c;
  
  local_20 = 0;
  uStack_1c = 0;
  thunk_FUN_0418ae1a(param_1,param_2,param_3,&local_20);
  if (DAT_02019b08 == '\0') {
    thunk_FUN_040f248f(param_1,local_58);
    if ((local_25 & 4) == 0) {
      local_20 = local_44 * param_3;
    }
    else {
      local_20 = local_20 - local_38;
    }
  }
  return CONCAT44(uStack_1c,local_20);
}

