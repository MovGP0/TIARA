/* Ghidra address: 00957cf0 */
/* Ghidra symbol: FUN_00957cf0 */


void FUN_00957cf0(longlong *param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  byte local_29;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  *param_4 = 1;
  *param_3 = 1;
  (**(code **)(*param_2 + 0xe8))(param_2,local_50);
  lVar4 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],local_50[0]);
  if (lVar4 != 0) {
    iVar2 = (**(code **)**(undefined8 **)(lVar4 + 0x28))();
    iVar9 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x28))
                          (*(longlong **)(lVar4 + 0x28),iVar9);
        puVar6 = (undefined8 *)FUN_004113f0(uVar5,&PTR_FUN_00912520);
        cVar1 = *(char *)(puVar6 + 7);
        if (cVar1 == '\0') {
          (**(code **)*puVar6)(puVar6,&local_58);
          lVar7 = (**(code **)(*param_2 + 0x2c8))(param_2,local_58);
          if (lVar7 == 0) {
            uVar5 = FUN_00414520(&local_40);
            (**(code **)(*param_1 + 0x60))(param_1,puVar6,uVar5,&local_29);
            if (local_29 < 0xa0) {
              bVar10 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_29 >> 3] >> (local_29 & 7)
                       & 1) != 0;
            }
            else {
              bVar10 = false;
            }
            if (bVar10) {
              (**(code **)*puVar6)(puVar6,&local_60);
              FUN_00957a00(param_1,param_2,local_60,local_40);
            }
            else {
              *param_3 = 0;
              cVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_29,puVar6,param_2);
              if (cVar1 == '\0') {
                *param_4 = 0;
                break;
              }
            }
          }
        }
        else if (cVar1 == '\x01') {
          uVar5 = FUN_00414520(&local_40);
          (**(code **)(*param_1 + 0x60))(param_1,puVar6,uVar5,&local_29);
          if (local_29 < 0xa0) {
            bVar10 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_29 >> 3] >> (local_29 & 7) &
                     1) != 0;
          }
          else {
            bVar10 = false;
          }
          if (bVar10) {
            (**(code **)*puVar6)(puVar6,&local_68);
            plVar8 = (longlong *)(**(code **)(*param_2 + 0x2c8))(param_2,local_68);
            if (plVar8 == (longlong *)0x0) {
              (**(code **)*puVar6)(puVar6,&local_78);
              FUN_00957a00(param_1,param_2,local_78,local_40);
            }
            else {
              (**(code **)(*plVar8 + 0x160))(plVar8,&local_70);
              uVar5 = FUN_00414520(&local_38);
              (**(code **)(*param_1 + 0x58))
                        (param_1,local_70,*(undefined1 *)(puVar6 + 5),uVar5,&local_29);
              if (local_29 < 0xa0) {
                bVar10 = ((byte)(&DAT_01e328f0)[(longlong)(int)(uint)local_29 >> 3] >>
                          (local_29 & 7) & 1) != 0;
              }
              else {
                bVar10 = false;
              }
              if ((!bVar10) || (iVar3 = FUN_00416420(local_38,local_40), iVar3 != 0)) {
                *param_3 = 0;
                cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x1d,puVar6,param_2);
                if (cVar1 == '\0') {
                  *param_4 = 0;
                  break;
                }
              }
            }
          }
          else {
            *param_3 = 0;
            cVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_29,puVar6,param_2);
            if (cVar1 == '\0') {
              *param_4 = 0;
              break;
            }
          }
        }
        else if (cVar1 == '\x03') {
          (**(code **)*puVar6)(puVar6,&local_80);
          cVar1 = (**(code **)(*param_2 + 0x308))(param_2,local_80);
          if (cVar1 == '\0') {
            *param_3 = 0;
            cVar1 = (**(code **)(*param_1 + 0x70))(param_1,0x25,puVar6,param_2);
            if (cVar1 == '\0') {
              *param_4 = 0;
              break;
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_004145c0(&local_80,7);
  FUN_004145c0(&local_40,2);
  return;
}

