/* Ghidra address: 00ea7860 */
/* Ghidra symbol: FUN_00ea7860 */


undefined8 FUN_00ea7860(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_28 [2];
  undefined1 local_20;
  
  if (param_3 < 0) {
    bVar1 = false;
  }
  else {
    lVar2 = 0;
    if (*param_1 != 0) {
      lVar2 = *(longlong *)(*param_1 + -8);
    }
    bVar1 = param_3 < lVar2;
  }
  if (bVar1) {
    FUN_00417c40(param_2,*param_1 + (longlong)param_3 * 0x30,&DAT_00ea5ae8);
  }
  else {
    local_20 = 0;
    local_28[0] = param_3;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00ea2d28,1,PTR_PTR_020013c8,local_28,0);
    FUN_004134c0(uVar3);
  }
  return param_2;
}

