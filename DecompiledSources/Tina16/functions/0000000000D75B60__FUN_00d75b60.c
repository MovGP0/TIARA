/* Ghidra address: 00d75b60 */
/* Ghidra symbol: FUN_00d75b60 */


void FUN_00d75b60(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5d820);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_2 + 0x10));
    *(undefined1 *)((longlong)param_1 + 0xf5) = *(undefined1 *)(param_2 + 0xf5);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
    *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)(param_2 + 0x79);
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
    param_1[0x12] = *(longlong *)(param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
    (**(code **)(*(longlong *)param_1[0x23] + 0x10))
              ((longlong *)param_1[0x23],*(undefined8 *)(param_2 + 0x118));
    *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)(param_2 + 0x79);
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined1 *)((longlong)param_1 + 0xfa) = *(undefined1 *)(param_2 + 0xfa);
    *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
    *(undefined1 *)((longlong)param_1 + 0xfb) = *(undefined1 *)(param_2 + 0xfb);
    FUN_00414ad0(param_1 + 0x21,*(undefined8 *)(param_2 + 0x108));
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x110);
    iVar2 = FUN_00d77c90();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00d77ca0(param_2,iVar4);
        FUN_00d75d50(uVar3,param_1);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  }
  return;
}

