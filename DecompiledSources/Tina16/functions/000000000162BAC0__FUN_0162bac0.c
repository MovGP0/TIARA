/* Ghidra address: 0162bac0 */
/* Ghidra symbol: FUN_0162bac0 */


undefined1
FUN_0162bac0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
            undefined1 *param_5,undefined1 *param_6)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_40 [16];
  
  uVar6 = FUN_01612560(&DAT_01611548,1);
  *param_4 = 0xffffffff;
  *param_3 = 0;
  *param_5 = 0;
  *param_6 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58);
  bVar3 = FUN_0161c600(uVar7,param_2);
  cVar4 = *(char *)(*(longlong *)(param_1 + 0x10) + 8);
  bVar13 = (bVar3 & cVar4 == '3') != 0;
  if (bVar13) {
    *param_4 = 0xd;
  }
  bVar14 = (bVar3 & cVar4 == '1') != 0;
  if (bVar14) {
    *param_4 = 0xe;
  }
  if (!bVar14 && !bVar13) {
    uVar7 = FUN_0161bb40(param_2);
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == 1)) {
      lVar8 = FUN_004aeac0(uVar7,0);
      lVar9 = FUN_004aeac0(uVar7,1);
      cVar4 = FUN_016262b0(*(undefined8 *)(lVar8 + 0x10),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
      if ((cVar4 != '\0') &&
         (cVar4 = FUN_016262b0(*(undefined8 *)(lVar8 + 0x18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18)), cVar4 != '\0'
         )) {
        if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '1') &&
           (((*(char *)(lVar8 + 8) == '4' && (*(char *)(lVar9 + 8) == '\x0e')) &&
            (*(short *)(lVar9 + 10) == 0x169)))) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if (((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '3') && (*(char *)(lVar8 + 8) == '2'))
           && ((*(char *)(lVar9 + 8) == '\x0e' && (*(short *)(lVar9 + 10) == 0x168)))) {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        if (bVar13 || bVar14) {
          uVar7 = *(undefined8 *)(lVar8 + 0x58);
          uVar10 = FUN_01612bc0(lVar9,1);
          uVar11 = FUN_01612bc0(lVar9,2);
          cVar4 = FUN_0161c600(uVar10,param_2);
          if ((cVar4 == '\0') || (cVar4 = FUN_016262d0(uVar11,uVar7), cVar4 == '\0')) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          cVar4 = FUN_0161c600(uVar11,param_2);
          if ((cVar4 == '\0') || (cVar4 = FUN_016262d0(uVar10,uVar7), cVar4 == '\0')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar2 || bVar1) && (bVar13)) || ((bool)(bVar14 & bVar1))) {
            cVar4 = FUN_0161c600(uVar10,param_2);
            if (cVar4 == '\0') {
              *param_3 = uVar11;
            }
            else {
              *param_3 = uVar10;
            }
            *param_5 = 0;
            *param_4 = 9;
            return 1;
          }
        }
      }
    }
    else if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x20) == -1)) {
      lVar8 = FUN_004aeac0(uVar7,0);
      cVar4 = FUN_016262b0(*(undefined8 *)(lVar8 + 0x10),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10));
      if ((cVar4 != '\0') &&
         (cVar4 = FUN_016262b0(*(undefined8 *)(lVar8 + 0x18),
                               *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18)), cVar4 != '\0'
         )) {
        if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '1') && (*(char *)(lVar8 + 8) == '1'))
        {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '3') && (*(char *)(lVar8 + 8) == '3'))
        {
          bVar14 = true;
        }
        else {
          bVar14 = false;
        }
        if (bVar13 || bVar14) {
          lVar8 = FUN_0161be50(*(undefined8 *)(lVar8 + 0x58),param_2,local_40,1);
          if ((*(uint *)(lVar8 + 0x1c) & 1) != 0) {
            iVar12 = 0;
            do {
              if (iVar12 == 0) {
                uVar5 = *(undefined4 *)(lVar8 + 0x20);
              }
              else {
                uVar5 = *(undefined4 *)(lVar8 + 0x24);
              }
              FUN_01612770(uVar6,uVar5,0x66,0x77);
              uVar7 = FUN_0161be50(uVar6,param_2,local_40,1);
              uVar7 = FUN_01614c70(uVar7);
              FUN_016139c0(0,uVar7,*(undefined8 *)(param_1 + 0x128));
              iVar12 = iVar12 + 1;
            } while (iVar12 != 2);
            *param_6 = 1;
            if (bVar13) {
              *param_4 = 0x10;
            }
            if (bVar14) {
              *param_4 = 0xf;
            }
            return 1;
          }
        }
      }
    }
    FUN_00410f20(uVar6);
    return 0;
  }
  *param_3 = uVar7;
  return 1;
}

