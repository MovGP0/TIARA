/* Ghidra address: 00a4ebf0 */
/* Ghidra symbol: FUN_00a4ebf0 */


uint FUN_00a4ebf0(double param_1,double param_2,double param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  
  if (param_2 == 0.0) {
    uVar1 = FUN_0040c770(param_3 * 255.0);
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  else {
    if (0.5 < param_3) {
      local_38 = (param_3 + param_2) - param_3 * param_2;
    }
    else {
      local_38 = param_3 * (param_2 + 1.0);
    }
    local_30 = param_3 * 2.0 - local_38;
    uVar2 = FUN_00a4eac0(auStack_58,param_1 + 0.3333333333333333);
    uVar1 = FUN_00a4eac0(auStack_58,param_1);
    uVar3 = FUN_00a4eac0(auStack_58,param_1 - 0.3333333333333333);
  }
  return uVar2 & 0xff | (uVar1 & 0xff) << 8 | (uVar3 & 0xff) << 0x10;
}

