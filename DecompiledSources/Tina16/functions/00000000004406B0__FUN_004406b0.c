/* Ghidra address: 004406b0 */
/* Ghidra symbol: FUN_004406b0 */


undefined4 FUN_004406b0(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = thunk_FUN_041ac39f(param_1,param_2 + (ulonglong)param_3,param_4,&local_c,0);
  if (iVar1 == 0) {
    local_c = 0xffffffff;
  }
  return local_c;
}

