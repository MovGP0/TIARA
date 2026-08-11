/* Ghidra address: 00c3ce20 */
/* Ghidra symbol: FUN_00c3ce20 */


void FUN_00c3ce20(longlong param_1,longlong param_2,char param_3,char param_4,undefined8 param_5,
                 char param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  char local_7a;
  char local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [56];
  
  local_78 = 0;
  local_70 = 0;
  local_90 = param_1;
  local_88 = param_2;
  local_7a = param_3;
  local_79 = param_4;
  if (((param_1 != param_2) && (param_2 != 0)) && (cVar1 = FUN_00c3cb20(param_2), cVar1 == '\0')) {
    if (local_7a != '\0') {
      *(undefined4 *)(local_90 + 0x28) = *(undefined4 *)(local_88 + 0x28);
      *(undefined4 *)(local_90 + 0x2c) = *(undefined4 *)(local_88 + 0x2c);
    }
    if (local_79 != '\0') {
      if (param_6 == '\0') {
        iVar8 = *(int *)(*(longlong *)(local_90 + 0x30) + 0x10);
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          do {
            FUN_00c3d330(local_90,local_68,iVar7);
            FUN_004169a0(&local_70,local_68);
            iVar2 = FUN_00c3d140(local_88,local_70);
            if (iVar2 == -1) {
              uVar3 = FUN_004aeac0(*(undefined8 *)(local_90 + 0x30),iVar7);
              lVar5 = FUN_004aeac0(*(undefined8 *)(local_90 + 0x30),iVar7);
              FUN_004095f0(uVar3,(longlong)(*(int *)(lVar5 + 8) + 0xc));
              FUN_004aedb0(*(undefined8 *)(local_90 + 0x30),iVar7,0);
            }
            else {
              uVar3 = FUN_004aeac0(*(undefined8 *)(local_90 + 0x30),iVar7);
              uVar4 = FUN_004aeac0(*(undefined8 *)(local_88 + 0x30),iVar2);
              FUN_00c3cd90(auStack_b8,uVar3,uVar4);
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        FUN_004aee80(*(undefined8 *)(local_90 + 0x30));
        iVar8 = *(int *)(*(longlong *)(local_88 + 0x30) + 0x10);
        iVar7 = 0;
        if (-1 < iVar8 + -1) {
          do {
            FUN_00c3d330(local_88,local_68,iVar7);
            FUN_004169a0(&local_78,local_68);
            iVar2 = FUN_00c3d140(local_90,local_78);
            if (iVar2 == -1) {
              uVar3 = FUN_004aeac0(*(undefined8 *)(local_88 + 0x30),iVar7);
              uVar3 = FUN_00c3bef0(uVar3);
              iVar2 = FUN_004ae7e0(*(undefined8 *)(local_90 + 0x30),uVar3);
            }
            if (iVar2 != iVar7) {
              uVar4 = FUN_004aeac0(*(undefined8 *)(local_90 + 0x30),iVar7);
              uVar3 = *(undefined8 *)(local_90 + 0x30);
              uVar6 = FUN_004aeac0(uVar3,iVar2);
              FUN_004aedb0(uVar3,iVar7,uVar6);
              FUN_004aedb0(*(undefined8 *)(local_90 + 0x30),iVar2,uVar4);
            }
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        iVar8 = *(int *)(*(longlong *)(local_90 + 0x30) + 0x10);
        if ((iVar8 == *(int *)(*(longlong *)(local_88 + 0x30) + 0x10)) &&
           (iVar7 = 0, -1 < iVar8 + -1)) {
          do {
            uVar3 = FUN_004aeac0(*(undefined8 *)(local_90 + 0x30),iVar7);
            uVar4 = FUN_004aeac0(*(undefined8 *)(local_88 + 0x30),iVar7);
            FUN_00c3cd90(auStack_b8,uVar3,uVar4);
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
    }
  }
  FUN_00414560(&local_78,2);
  return;
}

