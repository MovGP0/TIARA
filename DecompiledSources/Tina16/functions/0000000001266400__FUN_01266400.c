/* Ghidra address: 01266400 */
/* Ghidra symbol: FUN_01266400 */


undefined1
FUN_01266400(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
            undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
            undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_00414610(param_9);
  FUN_00414610(param_12);
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x39) {
    local_89 = FUN_01261270(param_2,param_3,param_4,param_5,param_6,param_8,param_9,param_11,
                            param_12,0,0);
    if (((char)param_2[0x34] == '\x01') && (*(longlong *)(param_2[0x35] + 8) != 0)) {
      FUN_01266200(*(undefined8 *)(param_2[0x35] + 8),param_3);
    }
  }
  else {
    local_89 = 1;
    FUN_0125c270(param_2,param_3,param_4,param_5,param_6,param_9);
    FUN_0125cc80(param_2,param_3,param_4,param_5,param_6,param_9);
    cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
    if ((cVar1 != '\0') &&
       (cVar1 = (**(code **)(*(longlong *)param_2[0x33] + 0x88))((longlong *)param_2[0x33]),
       cVar1 != '\0')) {
      iVar3 = FUN_01d07010(param_2);
      FUN_00414b50(&local_38,L"none");
      FUN_00414b50(&local_40,&DAT_01266a9c);
      FUN_00414b50(&local_48,&DAT_01266aac);
      iVar6 = 0x42;
      do {
        FUN_00416760(&local_60,iVar6);
        FUN_00416cd0(&local_40,3,local_40,&DAT_01266abc,local_60);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x5b);
      iVar6 = 0x31;
      do {
        FUN_00416760(&local_68,iVar6);
        FUN_00416cd0(&local_48,3,local_48,&DAT_01266abc,local_68);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x3a);
      uVar5 = 0;
      FUN_00416cd0(&local_50,5,local_38,&DAT_01266abc,local_40,&DAT_01266abc,local_48);
      if (iVar3 == 0) {
        uVar5 = local_38;
        FUN_00414b50(&local_58,local_38);
      }
      if (iVar3 - 0x40U < 0x20) {
        bVar7 = (1 << ((byte)(iVar3 - 0x40U) & 0x1f) & 0x7fffffeU) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar5 = local_40;
        FUN_012422b0(&local_58,local_40,iVar3 + -0x41,0x7c);
      }
      if (iVar3 - 0x30U < 0x10) {
        bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << ((byte)(iVar3 - 0x30U) & 0x1f)
                & 0x3ffU) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        FUN_012422b0(&local_58,local_48,iVar3 + -0x30,0x7c);
      }
      FUN_00de88c0(&local_78,0x837,param_9);
      FUN_004168b0(&local_80,local_78);
      FUN_01250a90(&local_70,param_3,param_4,param_6,local_80,L"hotkey",local_50,local_58);
    }
    iVar3 = FUN_01cfd2d0();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_01253910(local_30,param_1,param_2,iVar6,param_3,param_5,param_6,param_7,param_9,param_10
                    );
        if (local_30[0] != 0) {
          (**(code **)(*param_4 + 0x98))(param_4,&local_88,local_30[0]);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar4 = FUN_01cfd2d0(param_2);
    FUN_0125b8a0(param_1,param_2,uVar4,param_3,param_4,param_6,param_9);
  }
  FUN_0041b800(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,7);
  FUN_0041b800(local_30);
  FUN_00414480(&param_9);
  FUN_00414480(&param_12);
  return local_89;
}

