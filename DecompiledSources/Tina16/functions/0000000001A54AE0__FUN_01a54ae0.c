/* Ghidra address: 01a54ae0 */
/* Ghidra symbol: FUN_01a54ae0 */


void FUN_01a54ae0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_28 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414ad0(*(longlong *)(param_1 + 0x738) + 0x100,&DAT_01a54c84);
  FUN_00414ad0(*(longlong *)(param_1 + 0x738) + 0xe0,L"Log file|*.log");
  FUN_00724380(*(undefined8 *)(param_1 + 0x738),L"file.log");
  local_48 = L"log.json";
  FUN_00416cd0(&local_28,3,*(undefined8 *)(*(longlong *)(param_1 + 0x2bc8) + 0x108),&DAT_01a54ce4);
  cVar1 = FUN_00440a20(local_28,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_013b7920(local_20,local_28);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xa8))
                        (*(longlong **)(param_1 + 0x738));
      if (cVar1 != '\0') {
        FUN_00724270(*(undefined8 *)(param_1 + 0x738),&local_38);
        uVar2 = FUN_0045ae90();
        (**(code **)(*local_20 + 0x108))(local_20,local_38,uVar2);
      }
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return;
}

