/* Ghidra address: 0078a0c0 */
/* Ghidra symbol: FUN_0078a0c0 */


void FUN_0078a0c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 local_28;
  longlong *local_20;
  
  if (param_1[0xd] != 0) {
    FUN_0078a130(param_1);
  }
  lVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  param_1[0xd] = lVar1;
  FUN_00742ed0(lVar1,100);
  local_28 = *(undefined8 *)(*param_1 + 0x90);
  local_20 = param_1;
  FUN_00742ef0(param_1[0xd],&local_28);
  FUN_00742eb0(param_1[0xd],1);
  return;
}

