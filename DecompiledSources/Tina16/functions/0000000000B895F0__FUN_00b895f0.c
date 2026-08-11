/* Ghidra address: 00b895f0 */
/* Ghidra symbol: FUN_00b895f0 */


ulonglong FUN_00b895f0(undefined8 param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  
  uVar1 = (ulonglong)param_2;
  cVar2 = (char)param_2;
  if (param_3 == '\0') {
    if (cVar2 == '\x01') {
      uVar1 = 0;
    }
    else if (cVar2 == '\0') {
      uVar1 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    }
  }
  if (param_3 == '\x01') {
    if (cVar2 == '\0') {
      uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    }
    else if (cVar2 == '\x01') {
      uVar1 = 0;
    }
  }
  return uVar1;
}

