/* Ghidra address: 012b2e80 */
/* Ghidra symbol: FUN_012b2e80 */


char FUN_012b2e80(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res10 [3];
  undefined1 auStack_68 [32];
  longlong local_48;
  char local_39;
  longlong *local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  local_48 = param_1;
  FUN_00414610(param_2);
  local_39 = '\0';
  if (local_res10[0] != 0) {
    iVar7 = *(int *)(*(longlong *)(local_48 + 0xa0) + 0x10);
    iVar9 = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar8 = (longlong *)FUN_00b94e60(*(undefined8 *)(local_48 + 0xa0),iVar9);
        if ((plVar8 != (longlong *)0x0) && (cVar3 = FUN_0198a580(plVar8), cVar3 == '\x04')) {
          local_38 = plVar8;
          (**(code **)(*plVar8 + 0x288))(plVar8,local_30);
          iVar5 = FUN_00416db0(local_30[0],local_res10[0]);
          if (iVar5 == 0) {
            uVar6 = (**(code **)(*local_38 + 0xf8))(local_38);
            cVar3 = FUN_012b2e20(auStack_68,uVar6);
            if (cVar3 != '\0') {
              local_39 = '\x01';
              break;
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar2 = local_48;
    if (local_39 == '\0') {
      *(undefined1 *)(local_48 + 0x4c8) = 0;
    }
    else {
      puVar1 = (undefined1 *)(local_48 + 0x4c8);
      *(longlong **)(local_48 + 0x4e8) = local_38;
      uVar6 = (**(code **)(*local_38 + 0x210))(local_38,0);
      *(undefined4 *)(lVar2 + 0x4dc) = uVar6;
      uVar6 = (**(code **)(*local_38 + 0x210))(local_38,1);
      *(undefined4 *)(lVar2 + 0x4e0) = uVar6;
      iVar7 = FUN_01b07e10(local_48,local_38);
      *(undefined8 *)(lVar2 + 0x4d0) =
           *(undefined8 *)(*(longlong *)(local_48 + 0x2b0) + -8 + (longlong)iVar7 * 8);
      *(undefined1 *)(lVar2 + 0x4d8) = 1;
      sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
      if ((((sVar4 == 9) || (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0x6b)) ||
          (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 200)) ||
         ((sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0xd2 ||
          (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0xdc)))) {
        *puVar1 = 2;
      }
      else {
        sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
        if ((sVar4 == 0x24) || (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0x6c)) {
          *puVar1 = 1;
          *(undefined1 *)(lVar2 + 0x4d8) = 3;
        }
        else {
          sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
          if (sVar4 == 0xf) {
            *puVar1 = 5;
          }
          else {
            sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
            if (sVar4 == 0xd) {
              *puVar1 = 6;
            }
            else {
              sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
              if (((sVar4 == 0x10) ||
                  (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0xd9)) ||
                 (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0xda)) {
                *puVar1 = 3;
              }
              else {
                sVar4 = (**(code **)(*local_38 + 0xf8))(local_38);
                if ((sVar4 == 0xe) ||
                   (sVar4 = (**(code **)(*local_38 + 0xf8))(local_38), sVar4 == 0x43)) {
                  *puVar1 = 4;
                }
                else {
                  *puVar1 = 7;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_39;
}

