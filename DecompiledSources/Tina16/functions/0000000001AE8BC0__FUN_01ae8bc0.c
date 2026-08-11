/* Ghidra address: 01ae8bc0 */
/* Ghidra symbol: FUN_01ae8bc0 */


undefined1
FUN_01ae8bc0(longlong param_1,undefined4 param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  bVar7 = *(int *)(param_1 + 0x48) < 0;
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                    (*(longlong **)(param_1 + 0xd8),param_2);
  iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x28))(*(longlong **)(lVar2 + 0x80));
  iVar6 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = (ulonglong)*(byte *)(lVar2 + 0x58);
      if (uVar3 < 3) {
        if (uVar3 == 0) {
LAB_01ae8cbb:
          if (bVar7) {
            iVar6 = iVar6 + -1;
            lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            *param_3 = *(int *)(lVar4 + 0xe8);
            uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            FUN_01ab2940(uVar5,&local_30);
            FUN_00414ad0(param_4,local_30);
            lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            FUN_01cc1600(*(undefined8 *)(lVar4 + 0xe0),&local_38);
            FUN_00414ad0(param_5,local_38);
            uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            FUN_01ae86b0(param_1,&local_40,*(undefined8 *)(param_1 + 0xf0),uVar5,&DAT_01ae9018);
            FUN_00416ad0(param_5,local_40);
            uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            FUN_01ae86b0(param_1,&local_48,*(undefined8 *)(param_1 + 0xf8),uVar5,&DAT_01ae9028);
            FUN_00416ad0(param_5,local_48);
            FUN_019b6930(param_5,&DAT_01ae9038,&LAB_01ae904c);
            lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6);
            *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar2 + 0xe8);
            local_59 = 1;
            goto LAB_01ae8fc3;
          }
          lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                            (*(longlong **)(lVar2 + 0x80),iVar6 + -1);
          if (*(int *)(lVar4 + 0xe8) == *param_3) {
            bVar7 = true;
          }
        }
        else {
          if (uVar3 == 1) goto LAB_01ae8eff;
          if (uVar3 == 2) {
            if (bVar7) {
              iVar6 = iVar6 + -1;
              lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                                (*(longlong **)(lVar2 + 0x80),iVar6);
              *param_3 = *(int *)(lVar4 + 0xa0);
              uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                                (*(longlong **)(lVar2 + 0x80),iVar6);
              FUN_01ab6de0(uVar5,&local_50);
              FUN_00414ad0(param_4,local_50);
              FUN_00414480(param_5);
              lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                                (*(longlong **)(lVar2 + 0x80),iVar6);
              *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar2 + 0xa0);
              local_59 = 1;
              goto LAB_01ae8fc3;
            }
            lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                              (*(longlong **)(lVar2 + 0x80),iVar6 + -1);
            if (*(int *)(lVar4 + 0xa0) == *param_3) {
              bVar7 = true;
            }
          }
        }
      }
      else {
        if (1 < uVar3 - 3) {
          if (uVar3 - 5 < 2) goto LAB_01ae8cbb;
          if (uVar3 != 7) goto LAB_01ae8fac;
        }
LAB_01ae8eff:
        if (bVar7) {
          iVar6 = iVar6 + -1;
          lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                            (*(longlong **)(lVar2 + 0x80),iVar6);
          *param_3 = *(int *)(lVar4 + 0xa0);
          uVar5 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                            (*(longlong **)(lVar2 + 0x80),iVar6);
          FUN_01ab6de0(uVar5,&local_58);
          FUN_00414ad0(param_4,local_58);
          FUN_00414480(param_5);
          lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                            (*(longlong **)(lVar2 + 0x80),iVar6);
          *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar2 + 0xa0);
          local_59 = 1;
          goto LAB_01ae8fc3;
        }
        lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x80) + 0x30))
                          (*(longlong **)(lVar2 + 0x80),iVar6 + -1);
        if (*(int *)(lVar4 + 0xa0) == *param_3) {
          bVar7 = true;
        }
      }
LAB_01ae8fac:
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_59 = 0;
LAB_01ae8fc3:
  FUN_00414560(&local_58,6);
  return local_59;
}

