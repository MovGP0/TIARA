/* Ghidra address: 017b0130 */
/* Ghidra symbol: FUN_017b0130 */


void FUN_017b0130(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  local_20 = FUN_00498310(0,0);
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1,&local_20);
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      FUN_00611620(param_1[6],lVar1);
    }
    else {
      FUN_00611620(param_1[7],lVar1);
    }
  }
  return;
}

