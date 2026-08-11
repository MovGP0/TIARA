/* Ghidra address: 00537730 */
/* Ghidra symbol: FUN_00537730 */


ulonglong FUN_00537730(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_005360d0(param_1);
  if (cVar1 == '\0') {
    pcVar2 = (char *)*param_1;
    if (pcVar2 == "\x01\aInteger\x04") {
      return (ulonglong)*(uint *)(param_1 + 2);
    }
    if (*pcVar2 == '\x01') {
      pcVar2 = (char *)FUN_00589390(pcVar2);
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        return (longlong)*(char *)(param_1 + 2);
      }
      if (cVar1 != '\x02') {
        if (cVar1 == '\x04') {
          return (ulonglong)*(uint *)(param_1 + 2);
        }
        return (ulonglong)*(uint *)(param_1 + 2);
      }
      return (longlong)*(short *)(param_1 + 2);
    }
  }
  uVar3 = FUN_00560240(param_1,1);
  return uVar3;
}

