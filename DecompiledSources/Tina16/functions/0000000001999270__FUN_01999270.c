/* Ghidra address: 01999270 */
/* Ghidra symbol: FUN_01999270 */


void FUN_01999270(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = -1;
  bVar1 = false;
LAB_0199928c:
  do {
    iVar5 = iVar5 + 1;
    if (iVar5 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar5);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 != '\x04') goto LAB_0199928c;
    }
    if (iVar5 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
      uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar5);
      cVar2 = FUN_0198a580(uVar4);
      if (cVar2 == '\x04') {
        uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar5);
        cVar2 = FUN_01d01970(uVar4);
        if (cVar2 != '\0') {
          uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar5);
          uVar3 = FUN_01d03160(uVar4);
          cVar2 = FUN_01d3e720(uVar3);
          if (cVar2 != '\0') {
            uVar4 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar5);
            FUN_01cffe00(uVar4);
          }
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

