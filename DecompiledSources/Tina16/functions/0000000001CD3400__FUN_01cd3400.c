/* Ghidra address: 01cd3400 */
/* Ghidra symbol: FUN_01cd3400 */


void FUN_01cd3400(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  bVar1 = false;
  *param_2 = 0;
  *param_3 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
      if (cVar2 == '\0') {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
        cVar2 = FUN_004113d0(uVar3,&PTR_FUN_01aaff18);
        if (cVar2 != '\0') {
          uVar3 = FUN_01cd6670(param_1);
          if ((byte)uVar3 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 1U) !=
                    0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            if (bVar1) {
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_00b90650(*param_2,*(undefined8 *)(lVar4 + 0xb8));
              *param_2 = uVar3;
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_00b90620(*param_3,*(undefined8 *)(lVar4 + 0xc0));
              *param_3 = uVar3;
            }
            else {
              bVar1 = true;
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              *param_2 = *(undefined8 *)(lVar4 + 0xb8);
              lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              *param_3 = *(undefined8 *)(lVar4 + 0xc0);
            }
          }
        }
      }
      else {
        uVar3 = FUN_01cd6670(param_1);
        if ((byte)uVar3 < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 6U) != 0
          ;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          if (bVar1) {
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
            uVar3 = FUN_00b90650(*param_2,*(undefined8 *)(lVar4 + 0x90));
            *param_2 = uVar3;
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
            uVar3 = FUN_00b90620(*param_3,*(undefined8 *)(lVar4 + 0x98));
            *param_3 = uVar3;
          }
          else {
            bVar1 = true;
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
            *param_2 = *(undefined8 *)(lVar4 + 0x90);
            lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
            *param_3 = *(undefined8 *)(lVar4 + 0x98);
          }
        }
        else {
          uVar3 = FUN_01cd6670(param_1);
          if ((byte)uVar3 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 1U) !=
                    0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            if (bVar1) {
              uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_01ab2a30(uVar3);
              uVar3 = FUN_00b90650(*param_2,uVar3);
              *param_2 = uVar3;
              uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_01ab2a60(uVar3);
              uVar3 = FUN_00b90620(*param_3,uVar3);
              *param_3 = uVar3;
            }
            else {
              bVar1 = true;
              uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_01ab2a30(uVar3);
              *param_2 = uVar3;
              uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar5);
              uVar3 = FUN_01ab2a60(uVar3);
              *param_3 = uVar3;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

