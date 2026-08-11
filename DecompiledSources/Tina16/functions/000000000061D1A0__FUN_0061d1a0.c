/* Ghidra address: 0061d1a0 */
/* Ghidra symbol: FUN_0061d1a0 */


ulonglong FUN_0061d1a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x98))(param_1);
  if (cVar1 != '\0') goto LAB_0061d28b;
  (**(code **)(*param_1 + 0xb8))(param_1);
  if (((*(char *)((longlong)param_1 + 0xd9) != '\0') &&
      (*(char *)((longlong)param_1 + 0xca) != '\0')) &&
     (((char)param_1[0x1b] == '\0' ||
      (((char)param_1[0x1b] != '\0' && (*(int *)((longlong)param_1 + 0xdc) == 0)))))) {
    (**(code **)(*param_1 + 0xe0))(param_1,(char)param_1[0x1b] == '\0');
  }
  uVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0xd9);
  if (*(byte *)((longlong)param_1 + 0xd9) == 0) goto LAB_0061d28b;
  lVar2 = FUN_0061d2a0(param_1);
  if (lVar2 == 0) {
LAB_0061d24c:
    cVar1 = FUN_0080f5c0(*(undefined8 *)PTR_DAT_02004030,param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_004d4d60(param_1);
      if (cVar1 == '\0') {
        lVar2 = FUN_00648670(0xb040,0,param_1);
        if (lVar2 != 1) {
          uVar4 = 0;
          goto LAB_0061d28b;
        }
      }
    }
  }
  else {
    uVar4 = FUN_0061d2a0(param_1);
    pcVar3 = (code *)FUN_00411550(uVar4,0xfff2);
    cVar1 = (*pcVar3)(uVar4,param_1);
    if (cVar1 == '\0') goto LAB_0061d24c;
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_0061d28b:
  return uVar4 & 0xffffffff;
}

