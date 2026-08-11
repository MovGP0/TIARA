/* Ghidra address: 01ce8540 */
/* Ghidra symbol: FUN_01ce8540 */


byte FUN_01ce8540(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte local_29;
  undefined8 local_20;
  
  local_20 = 0;
  local_29 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if (*(char *)(param_1 + 0x58) == '\0') {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_01cc0ae0(*(undefined8 *)(lVar4 + 0xe0),&local_20);
        bVar1 = FUN_01ce7b20(&local_20);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_00414b50(&local_20,*(undefined8 *)(*(longlong *)(lVar4 + 0x100) + 0xd8));
        bVar2 = FUN_01ce7b20(&local_20);
        local_29 = local_29 | bVar1 | bVar2;
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_00414ad0(*(longlong *)(lVar4 + 0x100) + 0xd8,local_20);
      }
      else if (*(char *)(param_1 + 0x58) == '\x01') {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_01cc0ae0(*(undefined8 *)(lVar4 + 0x98),&local_20);
        bVar1 = FUN_01ce7b20(&local_20);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_00414b50(&local_20,*(undefined8 *)(*(longlong *)(lVar4 + 0xf0) + 0xd8));
        bVar2 = FUN_01ce7b20(&local_20);
        local_29 = local_29 | bVar1 | bVar2;
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        FUN_00414ad0(*(longlong *)(lVar4 + 0xf0) + 0xd8,local_20);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_20);
  return local_29;
}

