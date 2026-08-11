/* Ghidra address: 006520b0 */
/* Ghidra symbol: FUN_006520b0 */


uint FUN_006520b0(undefined8 param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if (cVar1 != '\0') {
    if ((param_2 & 2) == 2) {
      param_2 = param_2 & 0xfffffffd;
    }
    else if ((param_2 & 1) != 1) {
      param_2 = param_2 | 2;
    }
  }
  uVar2 = FUN_00652100(param_1);
  return param_2 | uVar2;
}

