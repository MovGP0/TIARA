/* Ghidra address: 0160f920 */
/* Ghidra symbol: FUN_0160f920 */


void FUN_0160f920(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  char local_d1;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  longlong local_98 [3];
  int local_80;
  int local_78;
  int local_6c;
  int local_60;
  int local_5c;
  int local_58;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_f0 = auStack_158;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_48 = 0;
  local_98[2] = 0;
  local_98[1] = 0;
  local_98[0] = 0;
  local_a0 = (undefined2 *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_d0 = *(longlong *)(param_1 + 0xb0);
  local_80 = 0;
  local_d1 = '\0';
  FUN_01d34d40(*(undefined8 *)(local_d0 + 8));
  local_138 = L"diagram.txt";
  FUN_00416cd0(&local_48,3,local_res10[0],L"\\Temp\\");
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_6c = 0;
  cVar1 = FUN_00440a20(local_48,1);
  if (cVar1 != '\0') {
    (**(code **)(*local_30 + 0xd8))(local_30,local_48);
    iVar2 = (**(code **)(*local_30 + 0x28))();
    local_58 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_30 + 0x18))(local_30,local_98,local_58);
        if ((local_98[0] != 0) && (local_6c == 0)) {
          iVar3 = FUN_00416db0(local_98[0],&DAT_01610058);
          if (iVar3 == 0) {
            local_6c = 1;
            local_78 = local_58;
          }
          else {
            local_c8 = (longlong *)FUN_01b21190(local_98[0],0x20,0);
            (**(code **)(*local_c8 + 0x18))(local_c8,&local_a0,0);
            (**(code **)(*local_40 + 0x78))(local_40,local_a0);
            (**(code **)(*local_c8 + 0x18))(local_c8,&local_a0,2);
            (**(code **)(*local_38 + 0x78))(local_38,local_a0);
            FUN_00410f20(local_c8);
          }
        }
        local_58 = local_58 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(*local_38 + 0x28))();
    local_58 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,local_98 + 2,local_58);
        iVar3 = FUN_00416db0(local_98[2],L"sigInput");
        if (iVar3 == 0) {
          local_d1 = '\x01';
        }
        FUN_0043f750(&local_100,local_58 + 1);
        local_138 = (wchar_t *)local_100;
        FUN_00416cd0(&local_f8,3,local_98[2],&DAT_0161008c);
        local_138 = (wchar_t *)((ulonglong)local_138 & 0xffffffffffffff00);
        local_130 = 0;
        local_128 = 1;
        local_120 = 0;
        FUN_01cc2930(*(undefined8 *)(local_d0 + 8),local_f8,0,0);
        iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
        local_5c = local_78 + 1;
        if (local_5c <= iVar3 + -1) {
          iVar3 = ((iVar3 + -1) - local_5c) + 1;
          do {
            (**(code **)(*local_30 + 0x18))(local_30,local_98,local_5c);
            if (local_98[0] != 0) {
              local_c8 = (longlong *)FUN_01b21190(local_98[0],0x3b,0);
              iVar4 = (**(code **)(*local_c8 + 0x28))();
              local_60 = 0;
              if (-1 < iVar4 + -1) {
                do {
                  (**(code **)(*local_c8 + 0x18))(local_c8,&local_110,local_60);
                  FUN_0043ea00(&local_108,local_110);
                  (**(code **)(*local_c8 + 0x40))(local_c8,local_60,local_108);
                  local_60 = local_60 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
              (**(code **)(*local_c8 + 0x18))(local_c8,&local_a0,0);
              local_a8 = FUN_0043fcb0(local_a0);
              local_b0 = (double)FUN_015f6560(local_a8);
              if (local_d1 != '\0') {
                local_b0 = local_b0 * 1000.0;
              }
              (**(code **)(*local_c8 + 0x18))(local_c8,&local_a0,local_58 + 1);
              cVar1 = FUN_01b215c0(*local_a0,0);
              if (cVar1 != '\0') {
                FUN_00416e20(&local_a0,1,1);
              }
              local_b8 = FUN_00448650(local_a0,PTR_DAT_02004830);
              FUN_01cc4620(local_d0,local_b0);
              FUN_01cc46b0(local_d0,0,local_b8);
              if (local_58 == 0) {
                local_80 = local_80 + 1;
              }
            }
            local_5c = local_5c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_58 = local_58 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(int *)(param_1 + 0x1418) = local_80;
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00414560(&local_110,4);
  FUN_00414560(&local_a0,4);
  FUN_00414480(&local_48);
  FUN_00414480(local_res10);
  return;
}

