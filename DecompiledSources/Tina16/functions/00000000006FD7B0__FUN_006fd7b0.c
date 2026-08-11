/* Ghidra address: 006fd7b0 */
/* Ghidra symbol: FUN_006fd7b0 */


void FUN_006fd7b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = (code *)*param_2;
  uVar2 = param_2[1];
  if (*(longlong *)(param_1 + 0x628) == 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b0),iVar6);
        (*pcVar1)(uVar2,uVar4);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = FUN_00654c00();
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar5 = FUN_00654bc0(param_1,iVar6);
        if ((*(longlong *)(lVar5 + 8) == param_3) &&
           (iVar3 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),lVar5), iVar3 == -1)) {
          (*pcVar1)(uVar2,lVar5);
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

