/* Ghidra address: 01a4fea0 */
/* Ghidra symbol: FUN_01a4fea0 */


void FUN_01a4fea0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined *local_38;
  wchar_t *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_18 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_38 = &DAT_01a5004c;
  local_30 = L"LLMLocalv3";
  FUN_00416cd0(&local_28,4,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_10,L"Model");
    if (cVar1 != '\0') {
      FUN_005eb6d0(local_10,&local_18,L"Model");
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0xb0))
                        (*(longlong **)(param_1 + 0x8e0),local_18);
      if (-1 < iVar2) {
        FUN_00414ad0(*(longlong *)(param_1 + 0x2968) + 8,local_18);
      }
    }
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_18);
  return;
}

