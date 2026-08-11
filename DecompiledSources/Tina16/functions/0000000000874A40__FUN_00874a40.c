/* Ghidra address: 00874a40 */
/* Ghidra symbol: FUN_00874a40 */


longlong * FUN_00874a40(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 != (longlong *)0x0) {
    (**(code **)(*param_3 + 8))(param_3);
  }
  LOCK();
  lVar1 = *param_2;
  if (param_4 == lVar1) {
    *param_2 = (longlong)param_3;
    lVar1 = param_4;
  }
  UNLOCK();
  FUN_0041b840(param_1,lVar1);
  if ((param_3 != (longlong *)0x0) && (*param_1 != param_4)) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return param_1;
}

