/* Ghidra address: 0065a6d0 */
/* Ghidra symbol: FUN_0065a6d0 */


ulonglong FUN_0065a6d0(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  lVar4 = param_1;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x78)) {
      pcVar2 = (code *)FUN_00411550(lVar4,0xffd6);
      lVar3 = (*pcVar2)(lVar4);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x88) != 0)) {
        pcVar2 = (code *)FUN_00411550(lVar3,0xffee);
        cVar1 = (*pcVar2)(lVar3,param_2);
        if (cVar1 != '\0') goto LAB_0065a782;
      }
    }
    lVar4 = FUN_007f9b70(param_1,1);
    if (lVar4 != 0) {
      pcVar2 = (code *)FUN_00411550(lVar4,0xffa0);
      cVar1 = (*pcVar2)(lVar4,param_2);
      if (cVar1 != '\0') goto LAB_0065a782;
    }
  }
  lVar4 = FUN_00648670(0xb016,*(undefined2 *)(param_2 + 8),(longlong)*(int *)(param_2 + 0x10));
  if (lVar4 == 0) {
    uVar5 = 0;
  }
LAB_0065a782:
  return uVar5 & 0xffffffff;
}

