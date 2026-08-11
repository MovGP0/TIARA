/* Ghidra address: 014f98a0 */
/* Ghidra symbol: FUN_014f98a0 */


undefined8 FUN_014f98a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_48;
  char cStack_46;
  short local_40;
  char cStack_3e;
  
  uVar1 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if ((iVar5 == *(int *)(*(longlong *)(param_2 + 0x10) + 0x10)) &&
     (iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10),
     iVar4 == *(int *)(*(longlong *)(param_2 + 8) + 0x10))) {
    iVar3 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar1 = FUN_014f9500(*(undefined8 *)(param_1 + 0x10),iVar3);
        uVar2 = FUN_014f9500(*(undefined8 *)(param_2 + 0x10),iVar3);
        local_40 = (short)uVar1;
        local_48 = (short)uVar2;
        if (local_40 != local_48) {
          return 0;
        }
        cStack_3e = (char)((ulonglong)uVar1 >> 0x10);
        cStack_46 = (char)((ulonglong)uVar2 >> 0x10);
        if (cStack_3e != cStack_46) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar1 = FUN_014f9500(*(undefined8 *)(param_1 + 8),iVar5);
        uVar2 = FUN_014f9500(*(undefined8 *)(param_2 + 8),iVar5);
        local_40 = (short)uVar1;
        local_48 = (short)uVar2;
        if (local_40 != local_48) {
          return 0;
        }
        cStack_3e = (char)((ulonglong)uVar1 >> 0x10);
        cStack_46 = (char)((ulonglong)uVar2 >> 0x10);
        if (cStack_3e != cStack_46) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

