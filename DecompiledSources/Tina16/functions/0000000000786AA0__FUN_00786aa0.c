/* Ghidra address: 00786aa0 */
/* Ghidra symbol: FUN_00786aa0 */


void FUN_00786aa0(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_1[6] != 0) {
    FUN_00786b10(param_1);
  }
  lVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  param_1[6] = lVar1;
  FUN_00742ed0(lVar1,100);
  local_28 = *(undefined8 *)(*param_1 + 0x68);
  local_20 = param_1;
  FUN_00742ef0(param_1[6],&local_28);
  FUN_00742eb0(param_1[6],1);
  return;
}

