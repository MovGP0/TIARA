/* Ghidra address: 00bfe130 */
/* Ghidra symbol: FUN_00bfe130 */


void FUN_00bfe130(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  HIMC pHVar4;
  undefined1 auStack_78 [32];
  LPVOID local_58;
  int local_50;
  undefined1 *local_40;
  DWORD local_34;
  int local_30;
  uint local_2c;
  LPVOID local_28;
  LPVOID local_20;
  
  local_40 = auStack_78;
  puVar1 = auStack_78;
  if ((*(ulonglong *)(param_2 + 0x10) & 0x800) != 0) {
    pHVar3 = (HWND)FUN_0065b870(param_1);
    pHVar4 = ImmGetContext(pHVar3);
    local_2c = (uint)pHVar4;
    cVar2 = FUN_00bfe0f0();
    if (cVar2 == '\0') {
      local_34 = ImmGetCompositionStringA((HIMC)(ulonglong)local_2c,0x800,(LPVOID)0x0,0);
      local_28 = (LPVOID)FUN_004095c0((longlong)(int)(local_34 + 1));
      ImmGetCompositionStringA((HIMC)(ulonglong)local_2c,0x800,local_28,local_34);
      *(undefined1 *)((longlong)local_28 + (longlong)(int)local_34) = 0;
      local_58 = (LPVOID)0x0;
      local_50 = 0;
      local_30 = thunk_FUN_04139c29(*(undefined4 *)PTR_DAT_02001cb0,0,local_28,local_34);
      local_58 = (LPVOID)FUN_004095c0((longlong)((local_30 + 1) * 2));
      local_50 = local_30;
      local_20 = local_58;
      thunk_FUN_04139c29(*(undefined4 *)PTR_DAT_02001cb0,0,local_28,local_34);
      (**(code **)(*param_1 + 0x328))(param_1,0x226,0,local_20);
      FUN_004095f0(local_20);
      FUN_004095f0(local_28);
    }
    else {
      local_34 = ImmGetCompositionStringW((HIMC)(ulonglong)local_2c,0x800,(LPVOID)0x0,0);
      local_20 = (LPVOID)FUN_004095c0((longlong)(int)(local_34 + 2));
      ImmGetCompositionStringW((HIMC)(ulonglong)local_2c,0x800,local_20,local_34);
      *(undefined2 *)((longlong)local_20 + (longlong)((int)local_34 / 2) * 2) = 0;
      (**(code **)(*param_1 + 0x328))
                (param_1,CONCAT62((uint6)((ulonglong)((longlong)(int)local_34 % 2) >> 0x10) & 0xffff
                                  ,0x226),0,local_20);
      FUN_004095f0(local_20);
    }
    pHVar3 = (HWND)FUN_0065b870(param_1);
    ImmReleaseContext(pHVar3,(HIMC)(ulonglong)local_2c);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

