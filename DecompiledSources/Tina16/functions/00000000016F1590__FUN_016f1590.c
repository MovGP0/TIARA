/* Ghidra address: 016f1590 */
/* Ghidra symbol: FUN_016f1590 */


void FUN_016f1590(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *local_30;
  
  if (param_2 == '\x06') {
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x3f0) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x3f0),iVar2);
        local_30 = (undefined1 *)FUN_004095c0(0x28);
        *local_30 = 10;
        *(undefined4 *)(local_30 + 4) = 0;
        *(undefined4 *)(local_30 + 8) = 0;
        *(undefined8 *)(local_30 + 0x18) = uVar1;
        *(undefined8 *)(local_30 + 0x10) = 0;
        local_30[0x20] = 1;
        local_30[1] = 0;
        FUN_00597e50(*(longlong *)(param_1 + 0x4f0) + 8,&local_30);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

