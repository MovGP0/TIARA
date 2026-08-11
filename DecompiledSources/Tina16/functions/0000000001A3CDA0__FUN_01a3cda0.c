/* Ghidra address: 01a3cda0 */
/* Ghidra symbol: FUN_01a3cda0 */


undefined1 FUN_01a3cda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_169;
  undefined8 local_168 [6];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [24];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  undefined1 local_80 [16];
  undefined1 local_70 [48];
  undefined1 local_40 [48];
  
  puVar3 = local_168;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  FUN_00417580(local_40,&DAT_00ea5f80);
  FUN_00417580(local_70,&DAT_00ea5ae8);
  FUN_00417580(local_80,&DAT_00ea5780);
  FUN_00417580(local_98,&DAT_00ea56e0);
  FUN_00417580(local_a8,&DAT_00ea5780);
  FUN_00417580(local_c0,&DAT_00ea56e0);
  local_169 = 0;
  FUN_00414480(param_2);
  FUN_00414480(param_3);
  FUN_00ea7a10(local_40,L"(?i)(\\S+\\s*\\S*)\\s*:\\s*(\\S+\\s*\\S*)",0x80);
  FUN_00ea82d0(local_40,local_70,param_1);
  while( true ) {
    cVar1 = FUN_00ea74f0(local_70);
    if (cVar1 == '\0') break;
    local_169 = 1;
    FUN_00ea74a0(local_70,local_80);
    FUN_00468530(&local_f8,1,1);
    FUN_00ea6fb0(local_80,&local_e0,&local_f8);
    FUN_00417c40(local_98,&local_e0,&DAT_00ea56e0);
    FUN_00ea6ce0(local_98,&local_100);
    FUN_00414ad0(param_2,local_100);
    FUN_00ea74a0(local_70,local_a8);
    FUN_00468530(&local_130,2,1);
    FUN_00ea6fb0(local_a8,&local_118,&local_130);
    FUN_00417c40(local_c0,&local_118,&DAT_00ea56e0);
    FUN_00ea6ce0(local_c0,&local_138);
    FUN_00414ad0(param_3,local_138);
    FUN_00ea7520(local_70,local_168);
    FUN_00417c40(local_70,local_168,&DAT_00ea5ae8);
  }
  FUN_00417740(local_168,&DAT_00ea5ae8);
  FUN_00414480(&local_138);
  FUN_00460ba0(&local_130);
  FUN_00417740(&local_118,&DAT_00ea56e0);
  FUN_00414480(&local_100);
  FUN_00460ba0(&local_f8);
  FUN_00417740(&local_e0,&DAT_00ea56e0);
  FUN_00417740(local_c0,&DAT_00ea56e0);
  FUN_00417740(local_a8,&DAT_00ea5780);
  FUN_00417740(local_98,&DAT_00ea56e0);
  FUN_00417740(local_80,&DAT_00ea5780);
  FUN_00417740(local_70,&DAT_00ea5ae8);
  FUN_00417740(local_40,&DAT_00ea5f80);
  return local_169;
}

