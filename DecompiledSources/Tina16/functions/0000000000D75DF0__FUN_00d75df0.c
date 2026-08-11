/* Ghidra address: 00d75df0 */
/* Ghidra symbol: FUN_00d75df0 */


uint FUN_00d75df0(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_00d75e60(param_1);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_00d75e40(param_1);
  return param_2 | uVar2;
}

