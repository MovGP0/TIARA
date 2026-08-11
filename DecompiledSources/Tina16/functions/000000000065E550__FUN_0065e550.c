/* Ghidra address: 0065e550 */
/* Ghidra symbol: FUN_0065e550 */


void FUN_0065e550(longlong *param_1,longlong param_2)

{
  UINT cIDs;
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  HWND pHVar4;
  longlong lVar5;
  longlong *plVar6;
  uint in_stack_ffffffffffffff88;
  undefined1 local_3c [16];
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  PGESTURECONFIG local_28;
  tagPOINT local_20;
  
  local_28 = (PGESTURECONFIG)0x0;
  local_20.y = (int)*(short *)(*(longlong *)(param_2 + 0x10) + 0x12);
  local_20.x = (int)*(short *)(*(longlong *)(param_2 + 0x10) + 0x10);
  PhysicalToLogicalPoint((HWND)param_1[0x8d],&local_20);
  local_20 = (tagPOINT)FUN_0064d3a0(param_1,&local_20);
  (**(code **)(*param_1 + 0xe0))(param_1,local_3c);
  cVar3 = FUN_00423210(local_3c,&local_20);
  if (cVar3 == '\0') {
    FUN_00419260(&local_28,&DAT_0065e510,1,1);
    local_28->dwID = 0;
    local_28->dwWant = 0;
    local_28->dwBlock = 1;
    pHVar4 = (HWND)FUN_0065b870(param_1);
    SetGestureConfig(pHVar4,0,1,local_28,0xc);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  else {
    lVar5 = FUN_00656230(param_1,&local_20,1,0,in_stack_ffffffffffffff88 & 0xffffff00);
    param_1[0x8b] = lVar5;
    if (lVar5 == 0) {
      param_1[0x8b] = (longlong)param_1;
    }
    plVar6 = (longlong *)param_1[0x8b];
    (**(code **)(*plVar6 + 200))(plVar6,&local_29,&local_2b);
    while ((plVar1 = (longlong *)plVar6[0xf], plVar1 != (longlong *)0x0 &&
           ((*(byte *)(plVar6[0x26] + 0x21) & 0x10) != 0))) {
      (**(code **)(*plVar1 + 200))(plVar1,&local_2a,&local_2c);
      bVar2 = local_2c;
      if ((local_29 & 2) != 0) {
        bVar2 = local_2c & ~DAT_01df73f9;
      }
      local_2b = local_2b | bVar2;
      local_29 = local_29 | local_2a;
      plVar6 = plVar1;
    }
    if (local_29 == 0) {
      FUN_00419260(&local_28,&DAT_0065e510,1,1);
      local_28->dwID = 0;
      local_28->dwWant = 0;
      local_28->dwBlock = 1;
    }
    else {
      FUN_00419260(&local_28,&DAT_0065e510,1,5);
      FUN_0040d200(local_28,0x3c,0);
      local_28->dwID = 4;
      local_28->dwWant =
           *(uint *)(&DAT_01df73fc + (ulonglong)((local_29 & 2) != 0) * 4) |
           *(uint *)(&DAT_01df7424 + (ulonglong)((local_2b & 2) != 0) * 4) |
           *(uint *)(&DAT_01df742c + (ulonglong)((local_2b & 1) != 0) * 4) |
           *(uint *)(&DAT_01df7434 + (ulonglong)((local_2b & 8) != 0) * 4) |
           *(uint *)(&DAT_01df743c + (ulonglong)((local_2b & 4) != 0) * 4);
      local_28->dwBlock =
           *(uint *)(&DAT_01df73fc + (ulonglong)((local_29 & 2) == 0) * 4) |
           *(uint *)(&DAT_01df7424 + (ulonglong)((local_2b & 2) == 0) * 4) |
           *(uint *)(&DAT_01df742c + (ulonglong)((local_2b & 1) == 0) * 4) |
           *(uint *)(&DAT_01df7434 + (ulonglong)((local_2b & 8) == 0) * 4) |
           *(uint *)(&DAT_01df743c + (ulonglong)((local_2b & 4) == 0) * 4);
      local_28[1].dwID = 3;
      local_28[1].dwWant = *(DWORD *)(&DAT_01df7404 + (ulonglong)((local_29 & 1) != 0) * 4);
      local_28[1].dwBlock = *(DWORD *)(&DAT_01df7404 + (ulonglong)((local_29 & 1) == 0) * 4);
      local_28[2].dwID = 5;
      local_28[2].dwWant = *(DWORD *)(&DAT_01df740c + (ulonglong)((local_29 & 4) != 0) * 4);
      local_28[2].dwBlock = *(DWORD *)(&DAT_01df740c + (ulonglong)((local_29 & 4) == 0) * 4);
      local_28[3].dwID = 6;
      local_28[3].dwWant = *(DWORD *)(&DAT_01df741c + (ulonglong)((local_29 & 8) != 0) * 4);
      local_28[3].dwBlock = *(DWORD *)(&DAT_01df741c + (ulonglong)((local_29 & 8) == 0) * 4);
      local_28[4].dwID = 7;
      local_28[4].dwWant = *(DWORD *)(&DAT_01df7414 + (ulonglong)((local_29 & 0x10) != 0) * 4);
      local_28[4].dwBlock = *(DWORD *)(&DAT_01df7414 + (ulonglong)((local_29 & 0x10) == 0) * 4);
    }
    pHVar4 = (HWND)FUN_0065b870(param_1);
    cIDs = 0;
    if (local_28 != (PGESTURECONFIG)0x0) {
      cIDs = local_28[-1].dwWant;
    }
    SetGestureConfig(pHVar4,0,cIDs,local_28,0xc);
    *(undefined8 *)(param_2 + 0x18) = 1;
    (**(code **)(*param_1 + 0x250))(param_1);
  }
  FUN_00419430(&local_28,&DAT_0065e510);
  return;
}

