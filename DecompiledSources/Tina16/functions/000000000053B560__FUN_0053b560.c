/* Ghidra address: 0053b560 */
/* Ghidra symbol: FUN_0053b560 */


ulonglong FUN_0053b560(longlong param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  ulonglong uVar5;
  ulonglong local_30 [2];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  pcVar1 = (char *)FUN_005361b0(param_1);
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar5 = CONCAT71(uVar6,*pcVar1 == '\x03');
  if (*pcVar1 == '\x03') {
    local_30[0] = *(ulonglong *)(param_1 + 0x10);
    if (*param_2 == '\x01') {
      lVar2 = FUN_00589390(param_2);
      if (*(int *)(lVar2 + 5) < *(int *)(lVar2 + 1)) {
        if (((longlong)local_30[0] < (longlong)(ulonglong)*(uint *)(lVar2 + 1)) ||
           ((longlong)(ulonglong)*(uint *)(lVar2 + 5) < (longlong)local_30[0])) {
          uVar5 = 0;
        }
        else {
          uVar5 = CONCAT71(uVar6,1);
        }
      }
      else if (((longlong)local_30[0] < (longlong)*(int *)(lVar2 + 1)) ||
              ((longlong)*(int *)(lVar2 + 5) < (longlong)local_30[0])) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71(uVar6,1);
      }
    }
    else {
      puVar3 = (ulonglong *)FUN_00589390(param_2);
      if ((longlong)puVar3[1] < (longlong)*puVar3) {
        if ((((longlong)local_30[0] < 0) || (local_30[0] < *puVar3)) || (puVar3[1] < local_30[0])) {
          uVar5 = 0;
        }
        else {
          uVar5 = CONCAT71(uVar6,1);
        }
      }
      else if (((longlong)local_30[0] < (longlong)*puVar3) ||
              ((longlong)puVar3[1] < (longlong)local_30[0])) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71(uVar6,1);
      }
    }
    if ((char)uVar5 != '\0') {
      uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(local_30,param_2,uVar4);
    }
  }
  return uVar5 & 0xffffffff;
}

