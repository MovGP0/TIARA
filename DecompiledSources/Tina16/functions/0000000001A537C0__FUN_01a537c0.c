/* Ghidra address: 01a537c0 */
/* Ghidra symbol: FUN_01a537c0 */


void FUN_01a537c0(longlong param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  int local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_80 = auStack_a8;
  local_88 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_20,L"English,German,French,Italian,Portuguese,Hindi,Spanish,Thai");
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x8b8);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x48);
  *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c);
  local_5c = 0;
  do {
    *(undefined4 *)(param_2 + 0x68 + (longlong)local_5c * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x68 + (longlong)local_5c * 4);
    local_5c = local_5c + 1;
  } while (local_5c != 3);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x58);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x60);
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x4c);
  FUN_00414ad0(param_2 + 8,*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 8));
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 0x8e0);
  FUN_00414ad0(param_2 + 0x78,L"English,German,French,Italian,Portuguese,Hindi,Spanish,Thai");
  *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x54);
  *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(*(longlong *)(param_1 + 0x2968) + 0x74);
  (**(code **)(*local_20 + 0x18))
            (local_20,&local_88,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x54));
  FUN_00414ad0(param_2 + 0x28,local_88);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0);
  FUN_00414ad0(param_2 + 0x80,*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 0x80));
  FUN_00414ad0(param_2 + 0x88,*(undefined8 *)(*(longlong *)(param_1 + 0x2968) + 0x88));
  FUN_00410f20(local_20);
  FUN_00414480(&local_88);
  FUN_00414560(&local_50,6);
  return;
}

