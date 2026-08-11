/* Ghidra address: 01995fc0 */
/* Ghidra symbol: FUN_01995fc0 */


void FUN_01995fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  uVar3 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  local_30 = param_1;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_00b94e60(local_30,iVar4);
      cVar1 = FUN_01995f40(auStack_58,uVar2);
      if (cVar1 != '\0') {
        uVar3 = FUN_00b94e60(local_30,iVar4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *param_4 = uVar3;
  return;
}

