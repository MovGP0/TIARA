/* Ghidra address: 01823b00 */
/* Ghidra symbol: FUN_01823b00 */


longlong FUN_01823b00(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_49;
  longlong local_48;
  undefined1 local_39;
  undefined *local_38;
  undefined8 local_30 [2];
  
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_30[0] = 0;
  local_38 = (undefined *)0x0;
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_a0 = param_1;
  lVar5 = FUN_01820a60(&DAT_0181fe58,1);
  if (*(char *)(param_2 + 0xa0) != '\0') {
    uVar8 = 0x80;
    do {
      pbVar1 = (byte *)(lVar5 + 0x58 + ((longlong)(uVar8 & 0xff) >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar8 & 7);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 != 0x100);
  }
  FUN_01820ef0(lVar5,local_a0);
  FUN_01821790(lVar5,&local_78);
  FUN_0043e600(&local_80,local_78);
  iVar2 = FUN_004170c0(L"macro",local_80,1);
  if (iVar2 == 1) {
    FUN_00416dc0(&local_78,local_78,6,0xff);
  }
  iVar3 = FUN_0043e420(local_78,L"function");
  FUN_01821790(lVar5,&local_70);
  if (iVar3 == 0) {
    for (iVar3 = FUN_00414cb0(local_a0);
        (*(short *)(local_a0 + -2 + (longlong)iVar3 * 2) != 0x3a && (iVar3 != 0));
        iVar3 = iVar3 + -1) {
    }
    uVar4 = *(undefined4 *)(lVar5 + 0x84);
    FUN_01820ee0(lVar5,iVar3 + 1);
    FUN_01821790(lVar5,&local_38);
    FUN_01820ee0(lVar5,uVar4);
  }
  else {
    FUN_00414480(&local_38);
  }
  uVar4 = FUN_018228f0(local_38,param_2);
  local_b8 = local_38;
  local_48 = FUN_01847460(&PTR_FUN_01842f58,1,local_70,uVar4);
  *(bool *)(local_48 + 0x18) = iVar2 == 1;
  FUN_018210c0(lVar5);
  FUN_018217f0(lVar5,&local_78);
  iVar2 = FUN_00416db0(local_78,&DAT_01824020);
  if (iVar2 == 0) {
    do {
      local_39 = 0;
      FUN_00414480(local_30);
      do {
        FUN_01821790(lVar5,&local_78);
        iVar2 = FUN_0043e420(local_78,&DAT_01824030);
        if (iVar2 == 0) {
          local_39 = 1;
        }
        else {
          iVar2 = FUN_0043e420(local_78,L"const");
          if (iVar2 != 0) {
            local_b8 = &DAT_0182405c;
            FUN_00416cd0(local_30,3,local_30[0],local_78);
          }
        }
        FUN_018210c0(lVar5);
        FUN_018217f0(lVar5,&local_78);
        iVar2 = FUN_00416db0(local_78,&DAT_0182406c);
        if (iVar2 == 0) {
          FUN_01821790(lVar5,&local_38);
          FUN_018210c0(lVar5);
          uVar4 = *(undefined4 *)(lVar5 + 0x84);
          local_49 = 0;
          FUN_018217f0(lVar5,&local_88);
          iVar2 = FUN_00416db0(local_88,&DAT_0182407c);
          if (iVar2 == 0) {
            local_49 = 1;
            FUN_018222a0(lVar5,&local_78);
            if (local_78 == 0) {
              FUN_01821e60(lVar5,&local_78);
            }
            if (local_78 == 0) {
              uVar4 = *(undefined4 *)(lVar5 + 0x84);
              FUN_018217f0(lVar5,&local_78);
              iVar2 = FUN_00416db0(local_78,&DAT_0182408c);
              if (iVar2 == 0) {
                FUN_018222a0(lVar5,&local_90);
                FUN_00416ba0(&local_78,&DAT_0182408c,local_90);
              }
              else {
                FUN_01820ee0(lVar5,uVar4);
              }
            }
            if (local_78 == 0) {
              FUN_01821790(lVar5,&local_78);
              plVar6 = (longlong *)FUN_0184cde0(param_2,local_78);
              if (plVar6 == (longlong *)0x0) {
                FUN_0046f180(&local_68);
              }
              else {
                (**(code **)(*plVar6 + 0x10))(plVar6,&local_68);
              }
            }
            else {
              FUN_01823700(&local_68,local_78);
            }
          }
          else {
            FUN_0046f180(&local_68);
            FUN_01820ee0(lVar5,uVar4);
          }
          FUN_01823880(auStack_d8);
          FUN_00414b50(&local_78,&DAT_0182409c);
        }
        else {
          iVar2 = FUN_00416db0(local_78,&DAT_018240ac);
          if (iVar2 == 0) {
            FUN_01820ee0(lVar5,*(int *)(lVar5 + 0x84) + -1);
            break;
          }
        }
        iVar2 = FUN_00416db0(local_78,&DAT_0182409c);
      } while (iVar2 != 0);
      FUN_018210c0(lVar5);
      FUN_018217f0(lVar5,&local_98);
      iVar2 = FUN_00416db0(local_98,&DAT_018240ac);
    } while (iVar2 != 0);
  }
  FUN_00410f20(lVar5);
  FUN_00414560(&local_98,6);
  FUN_00460ba0(&local_68);
  FUN_00414560(&local_38,2);
  return local_48;
}

