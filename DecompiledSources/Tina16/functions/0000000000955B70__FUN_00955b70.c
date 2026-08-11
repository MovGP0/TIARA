/* Ghidra address: 00955b70 */
/* Ghidra symbol: FUN_00955b70 */


void FUN_00955b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 byte *param_5)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  *param_4 = 0;
  *param_5 = 0;
  local_28 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_20 = (longlong *)FUN_0096d760(&PTR_FUN_00919020,1,param_2);
  do {
    if ((char)local_20[4] == '\x01') {
      FUN_00410f20(local_20);
      (**(code **)(*local_28 + 0x48))(local_28,&local_90);
      FUN_00414b90(param_4,local_90);
      FUN_00410f20(local_28);
LAB_00956040:
      FUN_004145c0(&local_90,10);
      FUN_00414520(&local_30);
      return;
    }
    (**(code **)(*local_20 + 8))(local_20);
    bVar1 = *(byte *)(local_20 + 1);
    if (bVar1 != 0) {
      if (bVar1 < 0xa0) {
        bVar5 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        bVar2 = *param_5;
        if (bVar2 < 0xa0) {
          bVar5 = ((byte)(&DAT_01e32904)[(longlong)(int)(uint)bVar2 >> 3] >> (bVar2 & 7) & 1) != 0;
        }
        else {
          bVar5 = false;
        }
        if (!bVar5) {
          *param_5 = bVar1;
        }
        goto LAB_00955ce6;
      }
      *param_5 = bVar1;
      FUN_00414520(param_4);
LAB_00955fe8:
      FUN_00956080(0,local_40);
      FUN_009560a0(0,local_40);
      goto LAB_00956040;
    }
LAB_00955ce6:
    cVar3 = (char)local_20[4];
    if (cVar3 == '\0') {
      (**(code **)*local_20)(local_20,&local_50);
      local_a8 = &DAT_00956100;
      FUN_00416310(&local_48,3,&DAT_009560f4,local_50);
      FUN_00948790(&local_30,local_48);
      iVar4 = FUN_00416420(local_30,&DAT_00956108);
      if (iVar4 == 0) {
        *param_5 = 0x4f;
        goto LAB_00955fe8;
      }
      (**(code **)(*local_28 + 0x28))(local_28,local_30);
    }
    else if (cVar3 == '\x02') {
      (**(code **)*local_20)(local_20,&local_58);
      iVar4 = FUN_00416420(local_58,&PTR_DAT_00956110);
      if (iVar4 == 0) {
        (**(code **)(*local_28 + 0x28))(local_28,&DAT_00956108);
      }
      else {
        (**(code **)*local_20)(local_20,&local_60);
        iVar4 = FUN_00416420(local_60,&PTR_DAT_0095611c);
        if (iVar4 == 0) {
          (**(code **)(*local_28 + 0x28))(local_28,&DAT_00956128);
        }
        else {
          (**(code **)*local_20)(local_20,&local_68);
          iVar4 = FUN_00416420(local_68,&DAT_00956130);
          if (iVar4 == 0) {
            (**(code **)(*local_28 + 0x28))(local_28,&DAT_0095613c);
          }
          else {
            (**(code **)*local_20)(local_20,&local_70);
            iVar4 = FUN_00416420(local_70,L"apos");
            if (iVar4 == 0) {
              (**(code **)(*local_28 + 0x28))(local_28,&DAT_00956154);
            }
            else {
              (**(code **)*local_20)(local_20,&local_78);
              iVar4 = FUN_00416420(local_78,L"quot");
              if (iVar4 != 0) {
                *param_5 = 0x29;
                goto LAB_00955fe8;
              }
              (**(code **)(*local_28 + 0x28))(local_28,&DAT_0095616c);
            }
          }
        }
      }
    }
    else if (cVar3 == '\x04') {
      (**(code **)*local_20)(local_20,&local_80);
      cVar3 = FUN_008ff640(local_80);
      if (cVar3 == '\0') {
        (**(code **)*local_20)(local_20,&local_88);
        (**(code **)(*local_28 + 0x28))(local_28,local_88);
      }
      else {
        (**(code **)(*local_28 + 0x18))(local_28,DAT_01e32936);
      }
    }
  } while( true );
}

