/* Ghidra address: 01d3f4b0 */
/* Ghidra symbol: FUN_01d3f4b0 */


undefined8 FUN_01d3f4b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0198a580(param_1);
  if (cVar1 == '\x04') {
    uVar2 = FUN_01d03160(param_1);
    cVar1 = FUN_01d3f3e0(uVar2,param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d3f210(param_1);
      if ((cVar1 == '\0') && (cVar1 = FUN_01d05040(param_1), cVar1 == '\0')) {
        return 0;
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

