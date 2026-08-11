/* Ghidra address: 01995bb0 */
/* Ghidra symbol: FUN_01995bb0 */


void FUN_01995bb0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = -1;
  bVar1 = false;
LAB_01995bcc:
  do {
    iVar5 = iVar5 + 1;
    if (iVar5 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) {
      uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x30),iVar5);
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 != '\x04') goto LAB_01995bcc;
    }
    if (iVar5 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10)) {
      uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x30),iVar5);
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x04') {
        uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x30),iVar5);
        cVar2 = FUN_01d04d40(uVar3);
        if ((cVar2 != '\0') &&
           (lVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x30),iVar5),
           *(char *)(*(longlong *)(lVar4 + 0x1a8) + 0x70) == '\x01')) {
          uVar3 = FUN_00b94e60(*(undefined8 *)(param_1 + 0x30),iVar5);
          FUN_01d04f40(uVar3);
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

