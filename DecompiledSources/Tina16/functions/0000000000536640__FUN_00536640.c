/* Ghidra address: 00536640 */
/* Ghidra symbol: FUN_00536640 */


undefined8 FUN_00536640(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_2 == (longlong *)0x0) {
    FUN_00536400(param_1);
  }
  else {
    lVar1 = *(longlong *)(*param_2 + -0xa8);
    if (lVar1 == 0) {
      FUN_00560080(param_1,param_2);
    }
    else {
      uVar2 = FUN_00417740(param_1,&DAT_00527bf8);
      FUN_00538080(local_res10,lVar1,uVar2);
    }
  }
  return param_1;
}

