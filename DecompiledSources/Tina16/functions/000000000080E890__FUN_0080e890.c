/* Ghidra address: 0080e890 */
/* Ghidra symbol: FUN_0080e890 */


int FUN_0080e890(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  int local_7c;
  longlong local_78;
  int local_6c;
  longlong local_68;
  uint local_60;
  int local_5c;
  undefined1 local_50 [8];
  int local_48;
  longlong local_40;
  longlong local_38;
  uint local_28;
  uint local_24;
  longlong local_20;
  
  local_90 = auStack_b8;
  local_5c = thunk_FUN_0410f747(0xe);
  uVar3 = thunk_FUN_041a6076();
  iVar2 = thunk_FUN_03ea2ad7(uVar3,local_50);
  if (iVar2 != 0) {
    FUN_00601800(local_40,&local_24,&local_28);
    lVar4 = FUN_00409570(local_24 + local_28);
    local_68 = lVar4 + (ulonglong)local_24;
    local_20 = lVar4;
    cVar1 = FUN_00601960(local_40,0,lVar4,local_68);
    if ((cVar1 != '\0') && (*(short *)(local_20 + 0xe) == 1)) {
      local_6c = (int)((longlong)
                       ((longlong)(int)(*(int *)(lVar4 + 4) * (uint)*(ushort *)(lVar4 + 0xe) + 0x1f)
                       & 0xffffffffffffffe0U) / 8);
      local_60 = *(int *)(lVar4 + 4) * local_6c;
      local_68 = (local_68 + (ulonglong)local_28) - (ulonglong)local_60;
      local_78 = lVar4;
      local_5c = FUN_0080e870(auStack_b8,local_68,local_60,0xff);
      if ((local_5c == 0) && (*(int *)(local_78 + 4) * 2 <= *(int *)(local_78 + 8))) {
        local_5c = FUN_0080e870(auStack_b8,local_68 - (ulonglong)local_60,local_60,0);
      }
      local_7c = local_5c / local_6c - local_48;
      if (local_7c < 2) {
        local_7c = 1;
      }
      local_5c = local_7c;
    }
    FUN_004095f0(local_20,local_24 + local_28);
    if (local_38 != 0) {
      thunk_FUN_0416f828(local_38);
    }
    if (local_40 != 0) {
      thunk_FUN_0416f828(local_40);
    }
  }
  return local_5c;
}

