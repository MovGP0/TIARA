/* Ghidra address: 01b058d0 */
/* Ghidra symbol: FUN_01b058d0 */


char * FUN_01b058d0(undefined4 *param_1,byte param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *unaff_RDI;
  
  if ((param_2 == 0) ||
     (lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)param_1),
     *(byte *)(lVar3 + 0xb6) < param_2)) {
    *param_3 = '\0';
    return unaff_RDI;
  }
  lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)param_1);
  lVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,
                       *(short *)(lVar3 + 0x9e) + (ushort)param_2 + -1);
  cVar1 = *(char *)(lVar3 + 0x33);
  uVar4 = FUN_01d36c80(*param_1,0,param_2 - 2);
  lVar3 = *(longlong *)(param_1 + 0x12) + (uVar4 & 0xffff);
  if (cVar1 == '\x04') {
    pcVar2 = *(char **)(lVar3 + 0x26);
    *param_3 = *pcVar2 + '\x01';
    return pcVar2;
  }
  if (cVar1 != '\a') {
    return unaff_RDI;
  }
  pcVar2 = *(char **)(lVar3 + 0x26);
  *param_3 = *pcVar2 + '\x01';
  return pcVar2;
}

