/* Ghidra address: 0094edb0 */
/* Ghidra symbol: FUN_0094edb0 */


undefined8 FUN_0094edb0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar1 < 6) {
    if (uVar1 == 1) {
      (**(code **)(*param_1 + 400))(param_1,param_2);
      return param_2;
    }
    if (1 < uVar1 - 2) {
LAB_0094ee74:
      FUN_00414520(param_2);
      return param_2;
    }
  }
  else if (1 < uVar1 - 6) {
    if (uVar1 == 8) {
      lVar2 = (**(code **)(*param_1 + 0x2f8))(param_1);
      if (lVar2 != 0) {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x2f8))(param_1);
        (**(code **)(*plVar3 + 400))(plVar3,param_2);
        return param_2;
      }
      FUN_00414520(param_2);
      return param_2;
    }
    if (uVar1 == 0xb) {
      (**(code **)(*param_1 + 0x150))(param_1,param_2);
      return param_2;
    }
    goto LAB_0094ee74;
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_2);
  return param_2;
}

