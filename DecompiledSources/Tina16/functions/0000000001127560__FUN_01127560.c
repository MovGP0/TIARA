/* Ghidra address: 01127560 */
/* Ghidra symbol: FUN_01127560 */


void FUN_01127560(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  *(int *)(param_1 + 0x8f4) = *(int *)(param_1 + 0x9c);
  *(int *)(param_1 + 0x8f0) =
       *(int *)(param_1 + 0x9c) - *(int *)(*(longlong *)(param_1 + 0x768) + 0x9c);
  *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 0x98);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x8f0));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x780) + 0x310) + 0x70);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0xb8));
  uVar3 = FUN_01119b00(&PTR_FUN_01117868,1,param_1);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x808),uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x808);
  uVar4 = FUN_00e81400(&PTR_FUN_00e80d78,1,uVar3);
  FUN_00c0f7b0(uVar3,uVar4);
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x808));
  }
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined8 *)(param_1 + 0xde0) = 0;
  *(undefined1 *)(param_1 + 0xb4e) = 0;
  uVar3 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0xde8) = uVar3;
  plVar1 = *(longlong **)(param_1 + 0xde8);
  (**(code **)(*plVar1 + 0x50))(plVar1,L"OpenWAVDlg");
  FUN_00414ad0(plVar1 + 0x20,&DAT_011277fc);
  FUN_00414ad0(plVar1 + 0x1c,L"WAV file (*.WAV)|*.WAV");
  FUN_00c78ad0(plVar1,L"Open WAV file");
  *(undefined4 *)(plVar1 + 0x1b) = 0x80214;
  FUN_00416cd0(&local_30,3,L"User Examples|",*(undefined8 *)PTR_DAT_02005010,L"\\User Examples");
  local_28 = local_30;
  FUN_00416cd0(&local_38,3,L"Tina Examples|",*(undefined8 *)PTR_DAT_020049a0,L"\\Examples");
  local_20 = local_38;
  (**(code **)(*plVar1 + 0x130))(plVar1,&local_28,1);
  FUN_00414560(&local_38,2);
  return;
}

