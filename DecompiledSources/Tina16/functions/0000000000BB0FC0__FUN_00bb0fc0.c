/* Ghidra address: 00bb0fc0 */
/* Ghidra symbol: FUN_00bb0fc0 */


void FUN_00bb0fc0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong local_28;
  short local_1a;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  uVar8 = 0;
LAB_00bb13a2:
  do {
    cVar2 = (**(code **)(*param_3 + 0x60))(param_3,&local_1a);
    if (cVar2 == '\0') {
LAB_00bb13bd:
      FUN_00414480(&local_50);
      FUN_0041b800(&local_48);
      FUN_00414480(&local_40);
      FUN_0041b800(&local_30);
      return;
    }
    if (2 < uVar8) {
      if (uVar8 == 3) {
        if (local_1a == 0x3f) {
          uVar8 = 4;
        }
        else {
          cVar2 = FUN_00bac6d0(local_1a);
          if (cVar2 == '\0') {
            uVar5 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,10,local_38,0xffffffff);
            FUN_004134c0(uVar5);
          }
          else {
            (**(code **)(*param_3 + 0x70))(param_3,local_1a);
          }
        }
      }
      else if (uVar8 == 4) {
        if (local_1a == 0x3e) {
          (**(code **)(*param_3 + 0x78))(param_3,&local_50);
          (**(code **)(*param_1 + 0x68))(param_1,local_50);
          cVar2 = (**(code **)(*param_3 + 0x28))(param_3);
          if (cVar2 == '\0') {
            if (param_1 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = param_1 + 0xd;
            }
            cVar2 = FUN_00bac410(plVar6,&local_28);
            if (cVar2 != '\0') {
              uVar5 = (**(code **)(*param_3 + 0x18))(param_3);
              iVar3 = FUN_00b97c90(uVar5);
              iVar4 = FUN_00b97c90(local_28);
              if (iVar3 == iVar4) {
                if ((local_28 != 0) && (cVar2 = FUN_0045aee0(local_28), cVar2 == '\0')) {
                  FUN_00410f20(local_28);
                }
              }
              else {
                (**(code **)(*param_3 + 0x20))(param_3,local_28);
                FUN_00bae380(param_1[3]);
              }
            }
          }
          goto LAB_00bb13bd;
        }
        (**(code **)(*param_3 + 0x70))(param_3,0x3f);
        (**(code **)(*param_3 + 0x70))(param_3,local_1a);
        uVar8 = 3;
      }
      goto LAB_00bb13a2;
    }
    if (uVar8 == 2) {
      cVar2 = FUN_00bac6b0(local_1a);
      if (cVar2 == '\0') {
        if (local_1a == 0x3f) {
          uVar8 = 4;
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_1a);
          uVar8 = 3;
        }
      }
    }
    else if (uVar8 == 0) {
      cVar2 = FUN_00bac710(local_1a,1);
      if (cVar2 == '\0') {
        uVar5 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,9,local_38,0xffffffff);
        FUN_004134c0(uVar5);
      }
      else {
        (**(code **)(*param_3 + 0x70))(param_3,local_1a);
        uVar8 = 1;
      }
    }
    else if (uVar8 == 1) {
      cVar2 = FUN_00bac6b0(local_1a);
      if (cVar2 == '\0') {
        cVar2 = FUN_00bac6f0(local_1a);
        if (cVar2 == '\0') {
          uVar5 = FUN_00bad230(&PTR_FUN_00b9ee48,1,5,10,local_38,0xffffffff);
          FUN_004134c0(uVar5);
        }
        else {
          (**(code **)(*param_3 + 0x70))(param_3,local_1a);
        }
      }
      else {
        (**(code **)(*param_3 + 0x78))(param_3,&local_40);
        FUN_00414ad0(param_1 + 0xb,local_40);
        puVar1 = (undefined *)param_1[0xb];
        if (puVar1 == &DAT_00bb1434) {
          bVar9 = true;
        }
        else if (puVar1 == (undefined *)0x0) {
          bVar9 = false;
        }
        else {
          iVar3 = FUN_0043e420(puVar1,&DAT_00bb1434);
          bVar9 = iVar3 == 0;
        }
        if (bVar9) {
          if (param_2 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = param_2 + 0x10;
          }
          FUN_0041b890(&local_48,lVar7,&DAT_00bb143c);
          uVar5 = FUN_0041b800(&local_30);
          cVar2 = FUN_00452340(local_48,&DAT_00bb144c,uVar5);
          if (cVar2 == '\0') {
            uVar5 = FUN_00bad230(&PTR_FUN_00b9ee48,1,3,0x2d,local_38,0xffffffff);
            FUN_004134c0(uVar5);
          }
        }
        uVar8 = 2;
      }
    }
  } while( true );
}

