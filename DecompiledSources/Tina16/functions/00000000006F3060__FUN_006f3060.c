/* Ghidra address: 006f3060 */
/* Ghidra symbol: FUN_006f3060 */


void FUN_006f3060(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x558) != param_2) {
    if (param_2 != '\0') {
      FUN_006f6bd0(param_1,0);
    }
    *(char *)(param_1 + 0x558) = param_2;
    FUN_006f2db0(param_1);
    if (*(char *)(param_1 + 0x558) == '\0') {
      if (*(char *)(param_1 + 0x510) == '\0') {
        iVar5 = FUN_006efc30();
        iVar7 = 0;
        if (-1 < iVar5 + -1) {
          do {
            uVar1 = FUN_0065b870(param_1);
            uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar7);
            iVar6 = FUN_006ef6e0(uVar2);
            uVar3 = thunk_FUN_041b2403(uVar1,0x102c,(longlong)iVar6,0xf000);
            lVar4 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar7);
            *(bool *)(lVar4 + 0x3a) = (int)(uVar3 >> 0xc) != 1;
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
    }
    else {
      FUN_006f2ed0(param_1);
    }
  }
  return;
}

