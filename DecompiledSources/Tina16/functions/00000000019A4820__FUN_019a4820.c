/* Ghidra address: 019a4820 */
/* Ghidra symbol: FUN_019a4820 */


bool FUN_019a4820(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                 int *param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  
  *param_4 = 0;
  *param_5 = -1;
  lVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar2 = FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_019a4770(auStack_48,uVar2);
      if (cVar1 != '\0') {
        lVar3 = FUN_00b94e60(param_1,iVar4);
        break;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  if (lVar3 != 0) {
    *param_4 = lVar3;
    iVar4 = (**(code **)(*(longlong *)*param_4 + 0x1c8))((longlong *)*param_4);
    *(bool *)param_6 = iVar4 < *param_5 + 1;
  }
  return lVar3 != 0;
}

