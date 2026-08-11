/* Ghidra address: 00659750 */
/* Ghidra symbol: FUN_00659750 */


ulonglong FUN_00659750(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  short local_3a [5];
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  lVar3 = FUN_007f9b70(param_1,0);
  if ((lVar3 != 0) && (lVar3 != param_1)) {
    if (*(char *)(lVar3 + 0x4d4) != '\0') {
      cVar1 = FUN_00659750(lVar3,param_2);
      if (cVar1 != '\0') goto LAB_00659820;
    }
    if (*(longlong *)(lVar3 + 0x78) != 0) {
      lVar4 = FUN_007f9b70(lVar3,1);
      if (((lVar4 != 0) && (lVar4 != lVar3)) && (*(char *)(lVar4 + 0x4d4) != '\0')) {
        cVar1 = FUN_00659750(lVar4,param_2);
        if (cVar1 != '\0') goto LAB_00659820;
      }
    }
  }
  uVar2 = FUN_007f9990(*(undefined4 *)(param_2 + 0x10));
  if ((*(uint *)(param_1 + 0xa0) & 0x1000) == 0) {
    local_3a[0] = *(short *)(param_2 + 8);
    pcVar5 = (code *)FUN_00411550(param_1,0xffb7);
    (*pcVar5)(param_1,local_3a,uVar2);
    *(short *)(param_2 + 8) = local_3a[0];
    if (local_3a[0] == 0) goto LAB_00659820;
  }
  uVar6 = 0;
LAB_00659820:
  return uVar6 & 0xffffffff;
}

