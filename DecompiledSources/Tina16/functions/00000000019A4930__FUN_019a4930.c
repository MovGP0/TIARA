/* Ghidra address: 019a4930 */
/* Ghidra symbol: FUN_019a4930 */


bool FUN_019a4930(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  *param_5 = 0xffffffff;
  lVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_019a48e0(auStack_48,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_00b94e60(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *param_4 = lVar3;
  return *param_4 != 0;
}

