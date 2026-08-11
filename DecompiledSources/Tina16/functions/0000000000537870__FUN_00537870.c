/* Ghidra address: 00537870 */
/* Ghidra symbol: FUN_00537870 */


ulonglong FUN_00537870(undefined8 *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  cVar2 = FUN_005360d0(param_1);
  if (cVar2 == '\0') {
    pcVar1 = (char *)*param_1;
    if (pcVar1 == "\x10\x05Int64") {
      return param_1[2];
    }
    if (pcVar1 == "\x10\x06UInt64") {
      return param_1[2];
    }
    if (pcVar1 == "\x01\bCardinal\x05") {
      return (ulonglong)*(uint *)(param_1 + 2);
    }
    if (*pcVar1 == '\x01') {
      iVar3 = FUN_00537730(param_1);
      return (longlong)iVar3;
    }
  }
  uVar4 = FUN_00560330(param_1,1);
  return uVar4;
}

