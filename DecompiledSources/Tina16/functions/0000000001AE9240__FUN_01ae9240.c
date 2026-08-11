/* Ghidra address: 01ae9240 */
/* Ghidra symbol: FUN_01ae9240 */


void FUN_01ae9240(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_00451440(&LAB_01ae9304);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 200))(param_2);
  }
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_005dcf20(param_2,uVar2);
  lVar3 = FUN_01ae91c0(param_1);
  if (lVar3 != 0) {
    FUN_01cc6990(lVar3,uVar2,local_res18[0]);
  }
  FUN_00410f20(uVar2);
  FUN_00414480(local_res18);
  return;
}

