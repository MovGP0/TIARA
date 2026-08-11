/* Ghidra address: 00709ce0 */
/* Ghidra symbol: FUN_00709ce0 */


undefined8 * FUN_00709ce0(longlong param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_00423010(&local_38,0,0,0,0);
  *param_2 = local_38;
  param_2[1] = uStack_30;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006abd68);
  if (cVar1 == '\0') {
    lVar2 = FUN_00786090(param_1);
    if (lVar2 != 0) {
      uVar3 = FUN_00786090(param_1);
      thunk_FUN_041b2403(uVar3,0x130a,(longlong)param_3,param_2);
    }
  }
  else {
    FUN_006d6170(uVar3,param_2,param_3);
  }
  return param_2;
}

