/* Ghidra address: 00cb52d0 */
/* Ghidra symbol: FUN_00cb52d0 */


void FUN_00cb52d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  char local_19;
  
  local_30 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  cVar1 = FUN_00cb0ad0(param_2);
  local_19 = cVar1 == '\0';
  if ((bool)local_19) {
    FUN_00cb0bf0(param_2);
  }
  FUN_00cac950(param_2,4);
  FUN_00cac950(param_2,param_5);
  FUN_00cacf30(param_2,param_4,1);
  if (*(char *)(param_1 + 0x119) == '\x02') {
    FUN_00414b50(&local_28,L"0.0.0.1");
  }
  else {
    FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_28,param_3,0);
  }
  local_68 = 1;
  FUN_00874ee0(&local_38,&local_28,&LAB_00cb55e4,1);
  uVar2 = FUN_00877c50(local_38);
  FUN_00cac950(param_2,uVar2);
  local_68 = 1;
  FUN_00874ee0(&local_40,&local_28,&LAB_00cb55e4,1);
  uVar2 = FUN_00877c50(local_40);
  FUN_00cac950(param_2,uVar2);
  local_68 = 1;
  FUN_00874ee0(&local_48,&local_28,&LAB_00cb55e4,1);
  uVar2 = FUN_00877c50(local_48);
  FUN_00cac950(param_2,uVar2);
  local_68 = 1;
  FUN_00874ee0(&local_50,&local_28,&LAB_00cb55e4,1);
  uVar2 = FUN_00877c50(local_50);
  FUN_00cac950(param_2,uVar2);
  (**(code **)(*param_2 + 0x148))(param_2,*(undefined8 *)(param_1 + 0x108),0);
  FUN_00cac950(param_2,0);
  if (*(char *)(param_1 + 0x119) == '\x02') {
    (**(code **)(*param_2 + 0x148))(param_2,param_3,0);
    FUN_00cac950(param_2,0);
  }
  if (local_19 != '\0') {
    (**(code **)(*param_2 + 0x1b8))(param_2);
  }
  FUN_00414560(&local_50,4);
  FUN_00414480(&local_28);
  return;
}

