/* Ghidra address: 00ada270 */
/* Ghidra symbol: FUN_00ada270 */


void FUN_00ada270(longlong param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_00414b50(*(longlong *)(param_1 + 0x40) + 0x108,&DAT_00ada5b4);
  FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x140));
  sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x20);
  if (((sVar1 == 0x2f) || ((ushort)(sVar1 - 0x41U) < 0x1a)) || ((ushort)(sVar1 - 0x61U) < 0x1a)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x44) = 1;
    while( true ) {
      sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x20);
      if (((sVar1 == 0x2f) || ((ushort)(sVar1 - 0x41U) < 0x1a)) || ((ushort)(sVar1 - 0x61U) < 0x1a))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      iVar3 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
      if (lVar6 != 0) {
        iVar3 = *(int *)(lVar6 + -4);
      }
      FUN_004169f0(*(longlong *)(param_1 + 0x40) + 0x108,iVar3 + 1);
      lVar5 = FUN_00414de0(*(longlong *)(param_1 + 0x40) + 0x108);
      iVar3 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
      if (lVar6 != 0) {
        iVar3 = *(int *)(lVar6 + -4);
      }
      *(short *)(lVar5 + -2 + (longlong)iVar3 * 2) = sVar1;
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x140));
    }
    iVar3 = FUN_0043e420(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),L"</script");
    if (iVar3 == 0) {
      *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x44) = 0x18;
    }
    iVar3 = 0;
    do {
      sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x20);
      if (sVar1 == 0) break;
      if ((sVar1 == 9) || (sVar1 == 0xd)) {
        iVar4 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
        if (lVar6 != 0) {
          iVar4 = *(int *)(lVar6 + -4);
        }
        FUN_004169f0(*(longlong *)(param_1 + 0x40) + 0x108,iVar4 + 1);
        lVar5 = FUN_00414de0(*(longlong *)(param_1 + 0x40) + 0x108);
        iVar4 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
        if (lVar6 != 0) {
          iVar4 = *(int *)(lVar6 + -4);
        }
        *(undefined2 *)(lVar5 + -2 + (longlong)iVar4 * 2) = 0x20;
      }
      else {
        if (sVar1 == 0x3e) break;
        iVar4 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
        if (lVar6 != 0) {
          iVar4 = *(int *)(lVar6 + -4);
        }
        FUN_004169f0(*(longlong *)(param_1 + 0x40) + 0x108,iVar4 + 1);
        lVar5 = FUN_00414de0(*(longlong *)(param_1 + 0x40) + 0x108);
        iVar4 = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
        if (lVar6 != 0) {
          iVar4 = *(int *)(lVar6 + -4);
        }
        *(short *)(lVar5 + -2 + (longlong)iVar4 * 2) = sVar1;
      }
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x140));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x20) == 0x3e) {
      iVar3 = 0;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108);
      if (lVar6 != 0) {
        iVar3 = *(int *)(lVar6 + -4);
      }
      FUN_004169f0(*(longlong *)(param_1 + 0x40) + 0x108,iVar3 + 1);
      lVar6 = FUN_00414de0(*(longlong *)(param_1 + 0x40) + 0x108);
      iVar3 = 0;
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108) != 0) {
        iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x108) + -4);
      }
      *(undefined2 *)(lVar6 + -2 + (longlong)iVar3 * 2) = 0x3e;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x44) == '\x18') {
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x82) = 0;
      }
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x140));
    }
  }
  else {
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x140) + 0x44) = 2;
  }
  return;
}

