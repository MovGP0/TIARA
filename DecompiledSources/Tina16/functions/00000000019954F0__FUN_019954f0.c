/* Ghidra address: 019954f0 */
/* Ghidra symbol: FUN_019954f0 */


void FUN_019954f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = -1;
  bVar1 = false;
LAB_01995510:
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
      uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x40),iVar6);
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 != '\x04') goto LAB_01995510;
    }
    if (iVar6 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x10)) {
      lVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x40),iVar6);
      cVar2 = FUN_0198a580(lVar4);
      if ((cVar2 == '\x04') && (cVar2 = FUN_01d01970(lVar4), cVar2 != '\0')) {
        *(undefined2 *)(lVar4 + 0xec) = 1;
        lVar5 = FUN_017ff620(lVar4);
        if (lVar5 == 0) {
          FUN_017ff5f0(lVar4,*(undefined8 *)(param_1 + 0x50));
        }
      }
      cVar2 = FUN_0198a580(lVar4);
      if (((cVar2 == '\x04') && (cVar2 = FUN_01d04d40(lVar4), cVar2 != '\0')) &&
         (*(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) != '\x03')) {
        FUN_01d04e30(lVar4,*(undefined8 *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x48));
        lVar5 = FUN_017ff620(lVar4);
        if (lVar5 == 0) {
          FUN_017ff5f0(lVar4,*(undefined8 *)(param_1 + 0x50));
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  } while( true );
}

