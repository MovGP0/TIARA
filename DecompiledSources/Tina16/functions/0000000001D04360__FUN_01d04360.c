/* Ghidra address: 01d04360 */
/* Ghidra symbol: FUN_01d04360 */


void FUN_01d04360(longlong *param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined1 local_138 [256];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_38 = 0;
  if ((((*PTR_DAT_02003038 != '\0') && (param_2 != (longlong *)0x0)) &&
      (*(char *)((longlong)param_1 + 0xb) == '\0')) &&
     ((*(char *)((longlong)param_2 + 0x12d) == '\0' &&
      (cVar1 = FUN_0198a580(param_1), cVar1 == '\x04')))) {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar1 = FUN_01d3f2d0(uVar3);
    if (cVar1 == '\0') {
      uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
      cVar1 = FUN_01d3d620(uVar4);
      if (((cVar1 == '\0') && (cVar1 = FUN_01d01970(param_1), cVar1 == '\0')) &&
         (((cVar1 = FUN_01d04d40(param_1), cVar1 == '\0' ||
           (lVar7 = FUN_01768e50(param_1[0x35],0), lVar7 == 0)) ||
          ((lVar7 = FUN_01768e50(param_1[0x35],0), *(char *)(lVar7 + 0xe) == '\0' &&
           (lVar7 = FUN_01768e50(param_1[0x35],0), *(char *)(lVar7 + 0xd) == '\0')))))) {
        uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        cVar1 = FUN_01d42330(uVar4);
        if ((cVar1 == '\0') ||
           ((lVar7 = FUN_01d06e20(param_1), lVar7 == 0 ||
            (lVar7 = FUN_01d06e20(param_1), *(char *)(lVar7 + 0xe) == '\0')))) goto LAB_01d04857;
      }
    }
    if (*(char *)((longlong)param_1 + 9) == '\0') {
      local_13c = (**(code **)(*param_2 + 0xd0))(param_2,0x18);
    }
    else {
      local_13c = (**(code **)(*param_2 + 0xd0))(param_2,0);
    }
    cVar1 = FUN_01d04d40(param_1);
    if ((cVar1 != '\0') && ((char)param_1[0x34] == '\x01')) {
      FUN_00eeb0b0(param_1,param_1[0xa0]);
    }
    iVar5 = (**(code **)(*param_1 + 0x1c8))();
    iVar8 = 0;
    if (-1 < iVar5 + -1) {
      do {
        (**(code **)(*param_1 + 0x1f0))(param_1,iVar8,&local_2c,&local_30);
        cVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,param_2,iVar8);
        if (cVar1 == '\0') {
          local_13e = 1;
          local_13d = 2;
        }
        else if (cVar1 == '\x01') {
          local_13e = 1;
          local_13d = 2;
        }
        else if (cVar1 == '\x02') {
          local_13e = 1;
          local_13d = 0;
        }
        else if (cVar1 == '\x03') {
          local_13e = 1;
          local_13d = 0;
        }
        cVar2 = FUN_01d04d40(param_1);
        if (((cVar2 == '\0') || ((char)param_1[0x34] != '\x01')) ||
           (iVar6 = (**(code **)(*(longlong *)param_1[0xa0] + 0x28))((longlong *)param_1[0xa0]),
           iVar6 <= iVar8)) {
          FUN_00ee6f30(local_138,param_1,iVar8);
          FUN_004169a0(&local_38,local_138);
        }
        else {
          (**(code **)(*(longlong *)param_1[0xa0] + 0x18))
                    ((longlong *)param_1[0xa0],&local_38,iVar8);
        }
        iVar6 = FUN_004170c0(L"pin:",local_38,1);
        if (iVar6 < 1) {
          FUN_00414480(&local_38);
        }
        else {
          iVar6 = FUN_004170c0(L"pin:",local_38,1);
          uVar4 = 0;
          if (local_38 != 0) {
            uVar4 = *(undefined4 *)(local_38 + -4);
          }
          FUN_00416dc0(&local_38,local_38,iVar6 + 5,uVar4);
          if (local_38 != 0) {
            iVar6 = 0;
            if (local_38 != 0) {
              iVar6 = *(int *)(local_38 + -4);
            }
            if (*(short *)(local_38 + -2 + (longlong)iVar6 * 2) == 0x29) {
              uVar4 = 0;
              if (local_38 != 0) {
                uVar4 = *(undefined4 *)(local_38 + -4);
              }
              FUN_00416e20(&local_38,uVar4,1);
            }
          }
        }
        FUN_01a98770(param_2,local_2c,local_30,local_13e,local_13d,cVar1,0x3fe6666666666666,
                     0x3fe6666666666666,local_13c,*(undefined4 *)((longlong)param_2 + 0xfc),300,0,0,
                     param_2[0x21],local_38,0,0);
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
LAB_01d04857:
  FUN_00414480(&local_38);
  return;
}

