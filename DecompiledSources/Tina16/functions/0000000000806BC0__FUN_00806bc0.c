/* Ghidra address: 00806bc0 */
/* Ghidra symbol: FUN_00806bc0 */


void FUN_00806bc0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  HWND hWnd;
  MARGINS local_28;
  
  cVar2 = FUN_006265e0();
  if ((cVar2 == '\0') || (cVar2 = FUN_0065be20(param_1), cVar2 == '\0')) {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xffff7fff;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar3,0,0xffffffff);
    }
    return;
  }
  lVar1 = param_1[0xd1];
  if (*(char *)(lVar1 + 0x10) == '\0') {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xffff7fff;
    FUN_0040d200(&local_28,0x10,0);
  }
  else {
    if (*(char *)(lVar1 + 0x38) == '\0') {
      local_28.cxLeftWidth = *(int *)(lVar1 + 0x14);
      local_28.cxRightWidth = *(int *)(lVar1 + 0x1c);
      local_28.cyTopHeight = *(int *)(lVar1 + 0x18);
      local_28.cyBottomHeight = *(int *)(lVar1 + 0x20);
    }
    else {
      local_28.cxLeftWidth = -1;
      local_28.cxRightWidth = -1;
      local_28.cyTopHeight = -1;
      local_28.cyBottomHeight = -1;
    }
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x8000;
    }
  }
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar3,0,0xffffffff);
    return;
  }
  hWnd = (HWND)FUN_0065b870(param_1);
  DwmExtendFrameIntoClientArea(hWnd,&local_28);
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

