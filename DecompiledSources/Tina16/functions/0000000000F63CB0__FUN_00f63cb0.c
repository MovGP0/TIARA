/* Ghidra address: 00f63cb0 */
/* Ghidra symbol: FUN_00f63cb0 */


undefined1 FUN_00f63cb0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar4);
      iVar7 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      iVar5 = 0;
      if (-1 < iVar7 + -1) {
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x18),iVar5);
          if ((*(char *)(lVar3 + 0x10) == '\0') &&
             (cVar1 = FUN_00f60540(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x2c),
                                   param_2,param_3), cVar1 != '\0')) {
            *param_4 = *(undefined1 *)(lVar2 + 0x30);
            return 1;
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

