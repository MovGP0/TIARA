/* Ghidra address: 00d021c0 */
/* Ghidra symbol: FUN_00d021c0 */


undefined1 FUN_00d021c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  iVar4 = 0;
  if (*(longlong *)(param_1[0x43] + 0x20) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1[0x43] + 0x20) + -4);
  }
  if (iVar4 < 1) {
    if (((param_1[0x25] != 0) && (lVar1 = *(longlong *)(param_1[0x25] + 0x158), lVar1 != 0)) &&
       (*(char *)(param_1[0x41] + 0x58) != *(char *)(lVar1 + 0x55))) {
      cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar2 != '\0') {
        FUN_00cbdf10(param_1);
      }
    }
    lVar1 = param_1[0x41];
    FUN_00414b50(&local_20,*(undefined8 *)(lVar1 + 0x30));
    uVar3 = FUN_00877cc0(*(undefined8 *)(lVar1 + 0x20),0x50);
    cVar2 = FUN_00879070(param_1[0x2b],local_20);
    if ((cVar2 == '\0') || (uVar3 != *(ushort *)(param_1 + 0x30))) {
      cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar2 != '\0') {
        FUN_00cbdf10(param_1);
      }
    }
    cVar2 = FUN_00879070(*(undefined8 *)(param_1[0x41] + 0x10),L"HTTPS");
    if (cVar2 == '\0') {
      local_29 = 0;
    }
    else {
      local_29 = 1;
    }
  }
  else {
    cVar2 = FUN_00879070(param_1[0x2b],*(undefined8 *)(param_1[0x43] + 0x20));
    if ((cVar2 == '\0') || ((uint)*(ushort *)(param_1 + 0x30) != *(uint *)(param_1[0x43] + 0x18))) {
      cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar2 != '\0') {
        FUN_00cbdf10(param_1);
      }
    }
    lVar1 = param_1[0x43];
    FUN_00414b50(&local_20,*(undefined8 *)(lVar1 + 0x20));
    uVar3 = *(uint *)(lVar1 + 0x18);
    cVar2 = FUN_00879070(*(undefined8 *)(param_1[0x41] + 0x10),L"HTTPS");
    if (cVar2 == '\0') {
      local_29 = 2;
    }
    else {
      local_29 = 3;
    }
  }
  (**(code **)(*param_1 + 0x148))(param_1,local_20);
  (**(code **)(*param_1 + 0x150))(param_1,uVar3);
  FUN_00414480(&local_20);
  return local_29;
}

