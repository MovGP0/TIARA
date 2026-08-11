/* Ghidra address: 017b0190 */
/* Ghidra symbol: FUN_017b0190 */


void FUN_017b0190(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  if (param_2 == '\0') {
    FUN_017b0130(param_1,1);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 8))((longlong *)param_1[6]);
    param_1[5] = lVar1;
  }
  else {
    FUN_017b0130(param_1,0);
    lVar1 = (**(code **)(*(longlong *)param_1[7] + 8))((longlong *)param_1[7]);
    param_1[5] = lVar1;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    local_20 = FUN_00498310(0,0);
    (**(code **)(*param_1 + 0xc0))(param_1,lVar1,&local_20);
    FUN_004095f0(param_1[5]);
  }
  return;
}

