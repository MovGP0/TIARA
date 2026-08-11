/* Ghidra address: 008786c0 */
/* Ghidra symbol: FUN_008786c0 */


undefined8 FUN_008786c0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_2 + -8);
  }
  lVar2 = lVar2 - param_3;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  iVar1 = (int)lVar2;
  if ((-1 < param_4) && (param_4 < iVar1)) {
    iVar1 = param_4;
  }
  if (iVar1 < 1) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00874520(local_20);
    (**(code **)(*local_20[0] + 0xf8))(local_20[0],param_1,param_2,param_3,iVar1);
  }
  FUN_0041b800(local_20);
  return param_1;
}

