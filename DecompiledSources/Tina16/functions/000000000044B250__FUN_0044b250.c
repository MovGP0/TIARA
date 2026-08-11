/* Ghidra address: 0044b250 */
/* Ghidra symbol: FUN_0044b250 */


undefined8 FUN_0044b250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int local_1c [3];
  
  local_1c[0] = 1;
  cVar1 = FUN_0044a7a0(param_1,local_1c,param_2,param_3);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = (ulonglong)*(uint *)(param_1 + -4);
    }
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(int)uVar2 < local_1c[0]);
  }
  return uVar3;
}

