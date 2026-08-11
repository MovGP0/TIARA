/* Ghidra address: 00659a70 */
/* Ghidra symbol: FUN_00659a70 */


ulonglong FUN_00659a70(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined2 local_2a;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  lVar2 = FUN_007f9b70(param_1,1);
  if (((lVar2 != 0) && (lVar2 != param_1)) && (*(char *)(lVar2 + 0x4d4) != '\0')) {
    cVar1 = FUN_00659a70(lVar2,param_2);
    if (cVar1 != '\0') goto LAB_00659af5;
  }
  if ((*(uint *)(param_1 + 0xa0) & 0x1000) == 0) {
    local_2a = *(undefined2 *)(param_2 + 8);
    pcVar3 = (code *)FUN_00411550(param_1,0xffb5);
    (*pcVar3)(param_1,&local_2a);
    *(undefined2 *)(param_2 + 8) = local_2a;
    if (*(short *)(param_2 + 8) == 0) goto LAB_00659af5;
  }
  uVar4 = 0;
LAB_00659af5:
  return uVar4 & 0xffffffff;
}

