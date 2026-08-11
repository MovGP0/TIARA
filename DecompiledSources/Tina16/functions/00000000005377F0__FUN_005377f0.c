/* Ghidra address: 005377f0 */
/* Ghidra symbol: FUN_005377f0 */


double FUN_005377f0(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  double dVar3;
  
  cVar1 = FUN_005360d0(param_1);
  if (cVar1 == '\0') {
    pcVar2 = (char *)*param_1;
    if (pcVar2 == "\x04\bExtended\x01\x02") {
      return (double)param_1[2];
    }
    if (*pcVar2 == '\x04') {
      pcVar2 = (char *)FUN_00589390(pcVar2);
      cVar1 = *pcVar2;
      if (cVar1 == '\0') {
        return (double)*(float *)(param_1 + 2);
      }
      if (cVar1 == '\x01') {
        return (double)param_1[2];
      }
      if (cVar1 == '\x02') {
        return (double)param_1[2];
      }
    }
  }
  dVar3 = (double)FUN_005602e0(param_1,1);
  return dVar3;
}

