/* Ghidra address: 01d2b500 */
/* Ghidra symbol: FUN_01d2b500 */


undefined8
FUN_01d2b500(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  undefined8 local_50;
  
  dVar3 = (double)FUN_00b90650(param_3,param_5);
  if (dVar3 <= param_6) {
    dVar3 = (double)FUN_00b90620(param_3,param_5);
    if (param_6 <= dVar3) {
      if (param_5 - param_3 == 0.0) {
        uVar1 = FUN_0040c770(param_2);
        uVar2 = FUN_0040c770(param_3);
        local_50 = FUN_00498310(uVar1,uVar2);
      }
      else {
        uVar1 = FUN_0040c770(((param_4 - param_2) / (param_5 - param_3)) * (param_6 - param_5) +
                             param_4);
        uVar2 = FUN_0040c770(param_6);
        local_50 = FUN_00498310(uVar1,uVar2);
      }
    }
    else if (param_5 <= param_3) {
      uVar1 = FUN_0040c770(param_2);
      uVar2 = FUN_0040c770(param_3);
      local_50 = FUN_00498310(uVar1,uVar2);
    }
    else {
      uVar1 = FUN_0040c770(param_4);
      uVar2 = FUN_0040c770(param_5);
      local_50 = FUN_00498310(uVar1,uVar2);
    }
  }
  else if (param_5 <= param_3) {
    uVar1 = FUN_0040c770(param_4);
    uVar2 = FUN_0040c770(param_5);
    local_50 = FUN_00498310(uVar1,uVar2);
  }
  else {
    uVar1 = FUN_0040c770(param_2);
    uVar2 = FUN_0040c770(param_3);
    local_50 = FUN_00498310(uVar1,uVar2);
  }
  return local_50;
}

