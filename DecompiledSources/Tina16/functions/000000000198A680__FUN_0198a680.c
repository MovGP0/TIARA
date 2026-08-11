/* Ghidra address: 0198a680 */
/* Ghidra symbol: FUN_0198a680 */


undefined8 FUN_0198a680(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  if (param_2 == (longlong *)0x0) {
    FUN_00414480(param_1);
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_0198a580(param_2);
      if (cVar1 == '\a') {
        FUN_010b9750(param_2,param_1);
      }
      else {
        cVar1 = FUN_0198a580(param_2);
        if (cVar1 == '\b') {
          FUN_0149ef40(param_2,param_1);
        }
        else {
          cVar1 = FUN_0198a580(param_2);
          if (cVar1 == '\v') {
            if ((undefined **)*param_2 == &PTR_FUN_010b5580) {
              FUN_0149ef40(param_2,param_1);
            }
            else {
              FUN_017b9ab0(param_2,param_1);
            }
          }
          else {
            FUN_00414480(param_1);
          }
        }
      }
    }
    else {
      FUN_017ff570(param_2,param_1);
    }
  }
  return param_1;
}

