/* Ghidra address: 00d41c70 */
/* Ghidra symbol: FUN_00d41c70 */


void FUN_00d41c70(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00d41b20(param_1);
  if ((cVar1 != '\0') && (cVar1 = FUN_00d41ae0(param_1), cVar1 == '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  cVar1 = FUN_00d41ae0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00d41aa0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00d41bc0(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_00d41b60(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0xa0))(param_1,param_2);
        }
      }
      else {
        (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      }
    }
    else {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

