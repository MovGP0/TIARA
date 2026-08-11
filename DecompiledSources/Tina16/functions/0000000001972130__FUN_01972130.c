/* Ghidra address: 01972130 */
/* Ghidra symbol: FUN_01972130 */


void FUN_01972130(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_2 + 0x128) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x128));
  }
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x120));
  }
  FUN_019712e0(*(undefined8 *)(param_2 + 0x150));
  FUN_01971570(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x150) + 0x1a8);
  *(char *)(param_2 + 0x116) = (char)plVar1[1];
  *(undefined1 *)(param_2 + 0x107) = *(undefined1 *)((longlong)plVar1 + 0x32);
  *(undefined1 *)(param_2 + 0x106) = *(undefined1 *)((longlong)plVar1 + 0x33);
  *(undefined1 *)(param_2 + 0x105) = *(undefined1 *)((longlong)plVar1 + 10);
  *(char *)(param_2 + 0x104) = (char)plVar1[2];
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 0xf8));
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x150) + 0x1a8);
  *(undefined1 *)(lVar2 + 8) = *(undefined1 *)(param_2 + 0x116);
  *(undefined1 *)(lVar2 + 0x32) = *(undefined1 *)(param_2 + 0x107);
  *(undefined1 *)(lVar2 + 0x33) = *(undefined1 *)(param_2 + 0x106);
  *(undefined1 *)(lVar2 + 10) = *(undefined1 *)(param_2 + 0x105);
  *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(param_2 + 0x104);
  FUN_00410f20(*(undefined8 *)(param_2 + 0xf8));
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x150) + 0x220);
  *(undefined1 *)(param_2 + 0xef) = *(undefined1 *)((longlong)plVar1 + 0x13);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)((longlong)plVar1 + 0x14);
  *(undefined1 *)(param_2 + 0xdb) = *(undefined1 *)((longlong)plVar1 + 0x12);
  *(int *)(param_2 + 0xd4) = (int)plVar1[3];
  *(undefined1 *)(param_2 + 0xd3) = *(undefined1 *)((longlong)plVar1 + 0x1d);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 200));
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x150) + 0x220);
  *(undefined1 *)(lVar2 + 0x13) = *(undefined1 *)(param_2 + 0xef);
  *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined1 *)(lVar2 + 0x12) = *(undefined1 *)(param_2 + 0xdb);
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined1 *)(lVar2 + 0x1d) = *(undefined1 *)(param_2 + 0xd3);
  FUN_00410f20(*(undefined8 *)(param_2 + 200));
  FUN_00414ad0(*(longlong *)(param_2 + 0x150) + 0x1c8,*(undefined8 *)(param_2 + 0xb8));
  *(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x210) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined1 *)(*(longlong *)(param_2 + 0x150) + 0x1e9) = *(undefined1 *)(param_2 + 0xaf);
  *(undefined1 *)(*(longlong *)(param_2 + 0x150) + 0x270) = *(undefined1 *)(param_2 + 0xae);
  *(undefined1 *)(*(longlong *)(param_2 + 0x150) + 0x271) = *(undefined1 *)(param_2 + 0xad);
  if (*(char *)(param_2 + 0x117) == '\0') {
    FUN_019714c0(param_2,param_2 + 0x48,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x150) + 0x240) + 0x48));
    FUN_00414ad0(*(longlong *)(*(longlong *)(param_2 + 0x150) + 0x240) + 0x48,
                 *(undefined8 *)(param_2 + 0x48));
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x150) + 0x240) + 0x90) == '\0') {
    if (((*(char *)(*(longlong *)(param_2 + 0x150) + 0x238) == '\0') &&
        (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x150) + 0x1a8) + 0x20) == '\0')) &&
       (*(char *)(param_2 + 0x117) == '\0')) {
      cVar3 = FUN_0196cc90(*(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x240));
      if (cVar3 == '\0') goto LAB_019723cc;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x150) + 0x1b0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (0 < iVar4) {
      uVar5 = FUN_0180bfb0();
      FUN_01809b60(uVar5,param_2 + 0x38,L"clErrors");
      plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x150) + 0x1b0);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2 + 0x30);
      FUN_00416cd0(param_2 + 0x40,3,*(undefined8 *)(param_2 + 0x38),&DAT_01972510,
                   *(undefined8 *)(param_2 + 0x30));
      FUN_0180dc30(*(undefined8 *)(param_2 + 0x150),*(undefined8 *)(param_2 + 0x40));
    }
  }
  else {
LAB_019723cc:
    (**(code **)(**(longlong **)(param_2 + 0x150) + 0x1b8))(*(undefined8 *)(param_2 + 0x150));
  }
  return;
}

