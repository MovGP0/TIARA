/* Ghidra address: 00537db0 */
/* Ghidra symbol: FUN_00537db0 */


ulonglong FUN_00537db0(undefined8 param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar1 = FUN_00536180(param_1);
  if (lVar1 != 0) {
    pcVar2 = (char *)FUN_00536180(param_1);
    if (*pcVar2 == '\r') {
      lVar1 = FUN_005361b0(param_1);
      return (ulonglong)*(uint *)(lVar1 + 4);
    }
    pcVar2 = (char *)FUN_00536180(param_1);
    if (*pcVar2 == '\x11') {
      plVar3 = (longlong *)FUN_00538390(param_1);
      if (*plVar3 == 0) {
        return 0;
      }
      return *(ulonglong *)(*plVar3 + -8);
    }
  }
  uVar4 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
  uVar5 = FUN_004134c0(uVar4);
  return uVar5;
}

