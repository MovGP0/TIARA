/* Ghidra address: 01a5ae10 */
/* Ghidra symbol: FUN_01a5ae10 */


void FUN_01a5ae10(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  FUN_00624b70(&local_50,L"SAPI.SpVoice");
  FUN_00468a90(param_1 + 0x2990,local_50);
  FUN_00460d30(&local_68,param_1 + 0x2990,&DAT_01a5b0ae);
  FUN_00468c40(param_1 + 0x29a8,&local_68);
  FUN_00460d30(&local_80,param_1 + 0x29a8,&DAT_01a5b0bb);
  iVar1 = FUN_00462650();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00460d30(&local_98,param_1 + 0x29a8,&DAT_01a5b0c4,iVar2);
      FUN_00468c40(&local_40,&local_98);
      FUN_00460d30(&local_b0,&local_40,&DAT_01a5b0cd);
      FUN_00467e90(&local_48,&local_b0);
      (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x78))
                (*(longlong **)(param_1 + 0x8b8),local_48);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416ba0(&local_b8,*(undefined8 *)(param_1 + 0x2ba0),L"\\speech_options.txt");
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x100))(*(longlong **)(param_1 + 0x8b8),local_b8);
  FUN_01a5b1c0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x60));
  FUN_00414480(&local_b8);
  FUN_00417840(&local_b0,&DAT_004013d8,4);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  FUN_00460ba0(&local_40);
  return;
}

