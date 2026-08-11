/* Ghidra address: 0095c400 */
/* Ghidra symbol: FUN_0095c400 */


void FUN_0095c400(longlong *param_1,longlong *param_2,undefined1 param_3,byte *param_4,char *param_5
                 )

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  char local_4b;
  byte local_4a;
  char local_49;
  longlong *local_48;
  char local_39;
  int local_38;
  int local_34;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_b8;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 0;
  *param_5 = '\x01';
  *param_4 = 1;
  (**(code **)(*param_2 + 0xe8))(param_2,&local_68);
  local_30 = (**(code **)(*param_1 + 0x28))(param_1,local_68);
  if (local_30 == 0) {
    *param_4 = 0;
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x28,0,param_2);
    if (cVar2 == '\0') {
      *param_5 = '\0';
    }
    else {
      local_98 = &local_49;
      FUN_0095bfe0(auStack_b8,param_2,param_3,&local_49);
    }
  }
  else {
    bVar1 = *(byte *)(local_30 + 0x38);
    if (bVar1 < 3) {
      if (bVar1 == 2) {
        local_98 = param_5;
        FUN_0095bfe0(auStack_b8,param_2,param_3,param_4);
        if (*param_5 != '\0') {
          local_28 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x118))(param_2);
          local_98 = (char *)CONCAT71(local_98._1_7_,1);
          local_20 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6,param_2,0x1a,0);
          local_48 = (longlong *)(**(code **)(*local_20 + 0x70))(local_20);
          while (local_48 != (longlong *)0x0) {
            cVar2 = (**(code **)(*local_48 + 0x168))(local_48);
            if (cVar2 != '\x01') {
              if (cVar2 == '\x03') {
                plVar6 = (longlong *)FUN_004113f0(local_48,&PTR_FUN_0090b468);
                cVar2 = (**(code **)(*plVar6 + 0x300))(plVar6);
                if (cVar2 == '\0') {
                  *param_4 = 0;
                  cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x1a,local_30,param_2);
                  *param_5 = cVar2;
                }
                else {
                  if ((*(char *)(local_30 + 0x28) != '\x01') ||
                     (cVar2 = FUN_009581c0(param_1), cVar2 == '\0')) goto LAB_0095c8d0;
                  *param_4 = 0;
                  cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x30,local_30,param_2);
                  *param_5 = cVar2;
                }
              }
              else {
                if (cVar2 != '\x04') goto LAB_0095c8d0;
                *param_4 = 0;
                cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x17,local_30,param_2);
                *param_5 = cVar2;
              }
              FUN_0095cd30(0,local_60);
              FUN_0095cd70(0,local_60);
              goto LAB_0095cd15;
            }
            (**(code **)(*local_48 + 0xe8))(local_48,&local_78);
            (**(code **)(*local_28 + 0x68))(local_28,local_78);
LAB_0095c8d0:
            local_48 = (longlong *)(**(code **)(*local_20 + 0x88))(local_20);
          }
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x118))(param_2);
          (**(code **)(*plVar6 + 800))(plVar6,&local_20);
          if (*(longlong *)(local_30 + 0x30) == 0) {
            uVar7 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser error.");
            FUN_004134c0(uVar7);
          }
          local_38 = 0;
          local_4b = (**(code **)(**(longlong **)(local_30 + 0x30) + 0x20))
                               (*(longlong **)(local_30 + 0x30),local_28,&local_38,&local_39);
          if (local_39 == '\0') {
            if ((local_4b == '\0') ||
               (iVar3 = (**(code **)(*local_28 + 0x38))(local_28), local_38 != iVar3)) {
              *param_4 = 0;
              cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x18,local_30,param_2);
              *param_5 = cVar2;
            }
          }
          else {
            *param_4 = 0;
            cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x1f,local_30,param_2);
            *param_5 = cVar2;
          }
          FUN_00410f20(local_28);
        }
      }
      else if (bVar1 == 0) {
        local_98 = param_5;
        FUN_0095bfe0(auStack_b8,param_2,param_3,param_4);
      }
      else if (bVar1 == 1) {
        puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
        iVar3 = (**(code **)*puVar5)();
        local_34 = 0;
        if (-1 < iVar3 + -1) {
          do {
            plVar6 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
            local_48 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_34);
            cVar2 = (**(code **)(*local_48 + 0x168))(local_48);
            if (cVar2 == '\x03') {
              (**(code **)(*local_48 + 0x160))(local_48,&local_70);
              iVar4 = FUN_00416420(local_70,0);
              if (iVar4 != 0) goto LAB_0095c63a;
            }
            else {
LAB_0095c63a:
              *param_4 = 0;
              cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x1b,local_30,param_2);
              if (cVar2 == '\0') {
                *param_5 = '\0';
                goto LAB_0095cd15;
              }
            }
            local_34 = local_34 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_98 = param_5;
        FUN_0095bfe0(auStack_b8,param_2,param_3,&local_4a);
        *param_4 = *param_4 & local_4a;
      }
    }
    else if (bVar1 == 3) {
      local_98 = param_5;
      FUN_0095bfe0(auStack_b8,param_2,param_3,param_4);
      if (*param_5 != '\0') {
        local_28 = (longlong *)FUN_00410e60(&PTR_FUN_008f5158,1);
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x118))(param_2);
        local_98 = (char *)CONCAT71(local_98._1_7_,1);
        local_20 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6,param_2,2,0);
        local_48 = (longlong *)(**(code **)(*local_20 + 0x70))(local_20);
        while (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0xe8))(local_48,&local_80);
          (**(code **)(*local_28 + 0x68))(local_28,local_80);
          local_48 = (longlong *)(**(code **)(*local_20 + 0x88))(local_20);
        }
        plVar6 = (longlong *)(**(code **)(*param_2 + 0x118))(param_2);
        (**(code **)(*plVar6 + 800))(plVar6,&local_20);
        if (*(longlong *)(local_30 + 0x30) == 0) {
          uVar7 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser error.");
          FUN_004134c0(uVar7);
        }
        if ((*(char *)(*(longlong *)(local_30 + 0x30) + 0x29) == '\0') &&
           (plVar6 = *(longlong **)(*(longlong *)(local_30 + 0x30) + 0x38),
           iVar3 = (**(code **)(*plVar6 + 0x20))(plVar6), iVar3 == 0)) {
          iVar3 = (**(code **)(*local_28 + 0x38))(local_28);
          if (0 < iVar3) {
            *param_4 = 0;
            cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x19,local_30,param_2);
            *param_5 = cVar2;
          }
        }
        else {
          local_38 = 0;
          local_4b = (**(code **)(**(longlong **)(local_30 + 0x30) + 0x20))
                               (*(longlong **)(local_30 + 0x30),local_28,&local_38,&local_39);
          if (local_39 == '\0') {
            if ((local_4b == '\0') ||
               (iVar3 = (**(code **)(*local_28 + 0x38))(local_28), local_38 != iVar3)) {
              *param_4 = 0;
              cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x18,local_30,param_2);
              *param_5 = cVar2;
            }
          }
          else {
            *param_4 = 0;
            cVar2 = (**(code **)(*param_1 + 0x70))(param_1,0x1f,local_30,param_2);
            *param_5 = cVar2;
          }
        }
        FUN_00410f20(local_28);
      }
    }
    else if (bVar1 == 4) {
      uVar7 = FUN_0044d490(&PTR_FUN_00901a10,1,
                           L"DTD_STRICT_MIXED_CONTENTTYPE is currently not supported.");
      FUN_004134c0(uVar7);
    }
  }
LAB_0095cd15:
  FUN_004145c0(&local_80,4);
  return;
}

