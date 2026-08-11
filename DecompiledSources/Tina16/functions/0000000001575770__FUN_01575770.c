/* Ghidra address: 01575770 */
/* Ghidra symbol: FUN_01575770 */


void FUN_01575770(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_248;
  undefined1 local_23e [514];
  undefined4 local_3c [3];
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar4);
      if (*(char *)(lVar2 + 0x4a) != '\0') {
        uVar3 = FUN_00442620(local_23e,*(undefined8 *)(lVar2 + 0x60));
        uVar1 = _SC_MCU_IsPortPin(param_2,uVar3,&local_248,local_3c);
        *(undefined1 *)(lVar2 + 0x49) = uVar1;
        FUN_004167d0(lVar2 + 0x58,local_248);
        *(undefined4 *)(lVar2 + 0x50) = local_3c[0];
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

