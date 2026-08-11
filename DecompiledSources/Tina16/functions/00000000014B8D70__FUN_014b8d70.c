/* Ghidra address: 014b8d70 */
/* Ghidra symbol: FUN_014b8d70 */


void FUN_014b8d70(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined8 local_30;
  char local_21;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_30 = 0;
  FUN_015fcb30(&local_58,local_3c);
  FUN_00414ad0(param_1 + 0x720,local_58);
  local_68 = L"serial.txt";
  FUN_00416cd0(&local_30,3,*(undefined8 *)(param_1 + 0x720),&DAT_014b8f94);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_30);
  local_68 = (wchar_t *)local_38;
  local_21 = FUN_0160d4e0(local_30,*(undefined8 *)(param_1 + 0x720),1,local_34);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  FUN_01778ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x1f8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6c8) + 0x4d8),uVar3);
  *(bool *)(param_1 + 0x708) = local_21 == '\0';
  cVar2 = FUN_00440a20(local_30,1);
  if (cVar2 != '\0') {
    FUN_004412f0(local_30);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_30);
  return;
}

