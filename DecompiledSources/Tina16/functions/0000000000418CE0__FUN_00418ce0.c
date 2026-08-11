/* Ghidra address: 00418ce0 */
/* Ghidra symbol: FUN_00418ce0 */


ulonglong FUN_00418ce0(char *param_1)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != (char *)0x0) {
    for (; PTR_DAT_0200aed0 != param_1;
        param_1 = (char *)**(undefined8 **)(param_1 + (ulonglong)(byte)param_1[1] + 10)) {
      if (*param_1 != '\r') {
        if (*param_1 != '\x0e') goto LAB_00418db6;
        bVar1 = param_1[1];
        iVar6 = *(int *)(param_1 + (ulonglong)bVar1 + 6);
        if ((iVar6 == 0) || (iVar5 = 0, iVar6 + -1 < 0)) goto LAB_00418db6;
        goto LAB_00418d5f;
      }
    }
    uVar4 = (ulonglong)DAT_0200aed8;
    goto LAB_00418db9;
  }
  goto LAB_00418db6;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) break;
LAB_00418d5f:
    if (((*(longlong *)(param_1 + (longlong)iVar5 * 0x10 + (ulonglong)bVar1 + 10) == 0) ||
        ((pcVar2 = (char *)**(undefined8 **)
                             (param_1 + (longlong)iVar5 * 0x10 + (ulonglong)bVar1 + 10),
         *pcVar2 == '\r' &&
         (cVar3 = FUN_00418ce0(**(undefined8 **)(pcVar2 + (ulonglong)(byte)pcVar2[1] + 10)),
         cVar3 != '\0')))) || ((*pcVar2 == '\x0e' && (cVar3 = FUN_00418ce0(pcVar2), cVar3 != '\0')))
       ) goto LAB_00418db9;
  }
LAB_00418db6:
  uVar4 = 0;
LAB_00418db9:
  return uVar4 & 0xffffffff;
}

