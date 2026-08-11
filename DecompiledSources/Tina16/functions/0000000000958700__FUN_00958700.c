/* Ghidra address: 00958700 */
/* Ghidra symbol: FUN_00958700 */


void FUN_00958700(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                 byte *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  byte *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  char local_49;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  *param_4 = 0;
  *param_5 = 0;
  local_28 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_20 = (longlong *)FUN_0096d760(&PTR_FUN_00919020,1,param_2);
LAB_00958b32:
  if ((char)local_20[4] == '\x01') {
    FUN_00410f20(local_20);
    (**(code **)(*local_28 + 0x48))(local_28,&local_98);
    FUN_00414b90(param_4,local_98);
    FUN_00410f20(local_28);
LAB_00958ba4:
    FUN_004145c0(&local_98,7);
    FUN_004145c0(&local_40,3);
    return;
  }
  (**(code **)(*local_20 + 8))(local_20);
  bVar2 = *(byte *)(local_20 + 1);
  if (bVar2 == 0) {
LAB_0095886e:
    cVar3 = (char)local_20[4];
    if (cVar3 == '\0') {
      (**(code **)*local_20)(local_20,&local_70);
      local_a8 = &LAB_00958c74;
      FUN_00416310(&local_68,3,&DAT_00958c68,local_70);
      FUN_00948790(&local_30,local_68);
      (**(code **)(*local_28 + 0x28))(local_28,local_30);
      goto LAB_00958b32;
    }
    if (cVar3 != '\x02') {
      if (cVar3 == '\x04') {
        (**(code **)*local_20)(local_20,&local_88);
        cVar3 = FUN_008ff640(local_88);
        if (cVar3 == '\0') {
          (**(code **)*local_20)(local_20,&local_90);
          (**(code **)(*local_28 + 0x28))(local_28,local_90);
        }
        else {
          (**(code **)(*local_28 + 0x18))(local_28,DAT_01e32938);
        }
      }
      goto LAB_00958b32;
    }
    (**(code **)*local_20)(local_20,&local_78);
    uVar5 = FUN_00414520(&local_40);
    local_a8 = (byte *)&local_48;
    bVar2 = (**(code **)(*param_1 + 0x38))(param_1,local_78,uVar5,&local_49);
    *param_5 = bVar2;
    if (local_49 != '\0') {
      *param_5 = 0x32;
      goto LAB_00958b52;
    }
    bVar2 = *param_5;
    if (bVar2 < 0xa0) {
      bVar6 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      FUN_00415e60(&local_80,DAT_01e3293a);
      iVar4 = FUN_00417170(local_80,local_40,1);
      if (iVar4 == 0) {
        if ((param_3 < 1) || (local_48 <= param_3)) {
          uVar5 = FUN_00414520(&local_38);
          local_a8 = param_5;
          FUN_00958700(param_1,local_40,param_3,uVar5);
          bVar2 = *param_5;
          if (bVar2 < 0xa0) {
            bVar6 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0
            ;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            (**(code **)(*local_28 + 0x28))(local_28,local_38);
            goto LAB_00958b32;
          }
        }
        else {
          cVar3 = FUN_009581c0(param_1);
          if (cVar3 == '\0') {
            *param_5 = 0x1c;
          }
          else {
            *param_5 = 0x3b;
          }
        }
      }
      else {
        *param_5 = 0x4f;
      }
    }
  }
  else {
    if (bVar2 < 0xa0) {
      bVar6 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0;
    }
    else {
      bVar6 = false;
    }
    if (!bVar6) {
      bVar1 = *param_5;
      if (bVar1 < 0xa0) {
        bVar6 = ((byte)(&DAT_01e32904)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        *param_5 = bVar2;
      }
      goto LAB_0095886e;
    }
    *param_5 = bVar2;
    FUN_00414520(param_4);
  }
LAB_00958b52:
  FUN_00958bf0(0,local_60);
  FUN_00958c10(0,local_60);
  goto LAB_00958ba4;
}

