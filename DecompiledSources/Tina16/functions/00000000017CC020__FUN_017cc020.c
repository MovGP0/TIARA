/* Ghidra address: 017cc020 */
/* Ghidra symbol: FUN_017cc020 */


void FUN_017cc020(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  lVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,param_2,param_3,param_5);
  *param_1 = lVar1;
  FUN_01cc3760(*(undefined8 *)(*param_1 + 8),local_res20);
  *(undefined1 *)(*(longlong *)(*param_1 + 8) + 0x4464) = param_6;
  FUN_00414560(&local_res20,2);
  return;
}

