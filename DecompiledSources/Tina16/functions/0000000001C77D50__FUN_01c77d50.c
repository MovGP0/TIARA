/* Ghidra address: 01c77d50 */
/* Ghidra symbol: FUN_01c77d50 */


void FUN_01c77d50(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  wchar_t *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  uint local_100 [2];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined8 local_71;
  char cStack_69;
  longlong *local_48 [2];
  undefined8 local_38;
  longlong *local_30;
  
  local_90 = auStack_178;
  local_130 = 0;
  local_148 = 0;
  local_138 = 0;
  local_140 = 0;
  local_110 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = 0;
  puVar1 = auStack_178;
  if (*PTR_DAT_020023b0 != '\0') {
    local_30 = (longlong *)FUN_007fc180(&PTR_FUN_01b905c8,1,*(undefined8 *)PTR_DAT_02004030);
    (**(code **)(*local_30 + 0x2d0))(local_30);
    FUN_0064dd90(local_30[0xdb],&local_98);
    FUN_00414ad0(param_1 + 0x1820,local_98);
    FUN_00410f20(local_30);
    FUN_00416ba0(param_1 + 0x1818,*(undefined8 *)PTR_DAT_02001340,L"\\EXAM\\");
    *PTR_DAT_02002ce0 = 0;
    local_7c = 0;
    local_71 = 0x454c474e49535b08;
    cStack_69 = ']';
    cVar2 = FUN_00409e80(0xff);
    *(char *)(param_1 + 0x1828) = cVar2 + '\x01';
    while( true ) {
      FUN_0043f750(&local_a8,*(undefined1 *)(param_1 + 0x1828));
      local_158 = local_a8;
      local_150 = L".RES";
      FUN_00416cd0(&local_a0,4,*(undefined8 *)(param_1 + 0x1818),&DAT_01c785e0);
      cVar2 = FUN_00440a20(local_a0,1);
      if ((cVar2 == '\0') || (0xff < local_7c)) break;
      *(char *)(param_1 + 0x1828) = *(char *)(param_1 + 0x1828) + '\x01';
      local_7c = local_7c + 1;
    }
    FUN_0043f750(&local_b8,*(undefined1 *)(param_1 + 0x1828));
    local_158 = local_b8;
    local_150 = L".RES";
    FUN_00416cd0(&local_b0,4,*(undefined8 *)(param_1 + 0x1818),&DAT_01c785e0);
    cVar2 = FUN_00440a20(local_b0,1);
    if (cVar2 == '\0') {
      *PTR_DAT_02002ce0 = 0;
      if (*PTR_DAT_02002ce0 == '\0') {
        *(undefined4 *)(param_1 + 0x17e4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x17ec) = 0xffffffff;
        FUN_01c79940(param_1,PTR_DAT_02003d18);
        if (*PTR_DAT_020023b0 != '\0') {
          if (*PTR_DAT_02003d20 == '\0') {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,&local_c8,0x59d);
            FUN_0064de00(*(undefined8 *)(param_1 + 0xa20),local_c8);
          }
          else {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,&local_c0,0x59c);
            FUN_0064de00(*(undefined8 *)(param_1 + 0xa20),local_c0);
          }
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1358),0);
          FUN_01c79370(param_1,0);
        }
      }
      if ((*PTR_DAT_02002ce0 == '\0') && (*PTR_DAT_020023b0 != '\0')) {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_d0,0x59a);
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_d8,0x59b);
        local_38 = FUN_01b913f0(local_d0,local_d8);
        FUN_00416ba0(&local_e0,*(undefined8 *)(param_1 + 0x1818),L"UsrNames.Lst");
        cVar2 = FUN_012bf4f0(local_48,local_e0);
        if (cVar2 != '\0') {
          (**(code **)(*local_48[0] + 200))(local_48[0],0);
          local_100[0] = (uint)*(byte *)(param_1 + 0x1828);
          local_f8 = 0;
          FUN_00442f70(&local_f0,&DAT_01c78630,local_100,0);
          FUN_004169a0(&local_108,&local_71);
          local_158 = local_108;
          local_150 = L" : ";
          FUN_00416cd0(&local_e8,4,local_f0,&DAT_01c78644);
          (**(code **)(*local_48[0] + 0x58))(local_48[0],local_e8);
          if (*PTR_DAT_02003d20 == '\0') {
            (**(code **)(*local_48[0] + 0x58))(local_48[0],L"[EXAM]");
          }
          else {
            (**(code **)(*local_48[0] + 0x58))(local_48[0],L"[TRAIN]");
          }
          FUN_004168e0(&local_120,*(undefined8 *)(param_1 + 0x1820));
          FUN_00b0cea0(&local_118,local_120,0xfde9);
          FUN_004156b0(&local_110,&LAB_01c78690,local_118);
          FUN_00416880(&local_128,local_110);
          (**(code **)(*local_48[0] + 200))(local_48[0],local_128);
          local_80 = 0;
          if (*(longlong *)PTR_DAT_02001340 != 0) {
            local_80 = *(int *)(*(longlong *)PTR_DAT_02001340 + -4);
          }
          local_84 = 0;
          if (*(longlong *)PTR_DAT_02003d18 != 0) {
            local_84 = *(undefined4 *)(*(longlong *)PTR_DAT_02003d18 + -4);
          }
          FUN_00416dc0(&local_138,*(undefined8 *)PTR_DAT_02003d18,local_80 + 1,local_84);
          FUN_004168e0(&local_140,local_138);
          FUN_00b0cea0(&local_130,local_140,0xfde9);
          FUN_00416880(&local_148,local_130);
          (**(code **)(*local_48[0] + 200))(local_48[0],local_148);
          FUN_00410f20(local_48[0]);
        }
        FUN_01b91530(local_38);
      }
      if ((*PTR_DAT_02002ce0 == '\0') && (*PTR_DAT_020023b0 != '\0')) {
        FUN_01c77cd0(param_1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa18),*PTR_DAT_020023b0);
        FUN_01c691d0(param_1,0x24);
        puVar1 = local_90;
      }
      else {
        *PTR_DAT_020023b0 = 0;
        *PTR_DAT_02003d20 = 0;
        FUN_016feb30(1,*(undefined4 *)PTR_DAT_02004650);
        puVar1 = local_90;
      }
    }
    else {
      *PTR_DAT_020023b0 = 0;
      *PTR_DAT_02003d20 = 0;
      puVar1 = local_90;
    }
  }
  local_90 = puVar1;
  FUN_00414480(&local_148);
  FUN_00414520(&local_140);
  FUN_00414480(&local_138);
  FUN_004144d0(&local_130);
  FUN_00414480(&local_128);
  FUN_00414520(&local_120);
  FUN_00414590(&local_118,2);
  FUN_00414480(&local_108);
  FUN_00414560(&local_f0,0xb);
  FUN_00414480(&local_98);
  return;
}

