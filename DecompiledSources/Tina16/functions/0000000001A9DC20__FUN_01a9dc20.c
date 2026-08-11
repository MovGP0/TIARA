/* Ghidra address: 01a9dc20 */
/* Ghidra symbol: FUN_01a9dc20 */


undefined1 * FUN_01a9dc20(undefined1 *param_1,double param_2,double param_3,double param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  
  if (param_3 == 0.0) {
    uVar1 = FUN_0040c770(param_4 * 255.0);
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  else {
    if (0.5 < param_4) {
      local_48 = (param_4 + param_3) - param_4 * param_3;
    }
    else {
      local_48 = param_4 * (param_3 + 1.0);
    }
    local_40 = param_4 * 2.0 - local_48;
    uVar1 = FUN_01a9daf0(auStack_68,param_2 + 0.3333333333333333);
    uVar2 = FUN_01a9daf0(auStack_68,param_2);
    uVar3 = FUN_01a9daf0(auStack_68,param_2 - 0.3333333333333333);
  }
  param_1[2] = uVar1;
  param_1[1] = uVar2;
  *param_1 = uVar3;
  return param_1;
}

