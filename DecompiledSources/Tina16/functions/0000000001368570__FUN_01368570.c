/* Ghidra address: 01368570 */
/* Ghidra symbol: FUN_01368570 */


void FUN_01368570(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
    cVar1 = FUN_017c3740(*(undefined8 *)(param_1 + 0xe0));
    if (cVar1 == '\0') {
      iVar8 = 0;
      if (-1 < iVar2 + -1) {
        do {
          cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar8);
          if (cVar1 == '\0') {
            (**(code **)(*param_2 + 0x1f0))(param_2,iVar8,&local_40,&local_44);
            iVar3 = FUN_017c2460(*(undefined8 *)(param_1 + 0xe0),local_40,local_44);
            if (-1 < 1 - iVar3) {
              uVar4 = FUN_00b959a0(local_40,local_44);
              *(undefined4 *)(param_1 + 0xdc) = uVar4;
              cVar1 = FUN_01368510(param_1,*(undefined4 *)(param_1 + 0xdc),local_3c);
              if (cVar1 == '\0') {
                puVar6 = (undefined8 *)FUN_004095c0(0x10);
                *puVar6 = param_2;
                uVar7 = FUN_00b95a80(*(undefined4 *)(param_1 + 0xdc));
                puVar6[1] = uVar7;
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0xe8),puVar6);
                cVar1 = FUN_0198a580(param_2);
                if (((cVar1 == '\x04') &&
                    (iVar3 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xd0),param_2), iVar3 == -1)) &&
                   (iVar3 = (**(code **)(*param_2 + 0x1c8))(param_2), iVar3 < 6)) {
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd0),param_2);
                }
              }
              else {
                puVar6 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xe8),local_3c[0]);
                cVar1 = FUN_0198a580(*puVar6);
                if (cVar1 == '\x05') {
                  FUN_004ae870(*(undefined8 *)(param_1 + 0xe8),local_3c[0]);
                }
                else {
                  puVar6 = (undefined8 *)FUN_004095c0(0x10);
                  *puVar6 = param_2;
                  uVar7 = FUN_00b95a80(*(undefined4 *)(param_1 + 0xdc));
                  puVar6[1] = uVar7;
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xe8),puVar6);
                }
              }
            }
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar8 = (**(code **)(*param_2 + 0x1d0))();
      iVar3 = 0;
      if (-1 < iVar8 + -1) {
        do {
          cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar2 + iVar3);
          if (cVar1 == '\0') {
            (**(code **)(*param_2 + 0x1f0))(param_2,iVar2 + iVar3,&local_40,&local_44);
            iVar5 = FUN_017c2460(*(undefined8 *)(param_1 + 0xe0),local_40,local_44);
            if (-1 < 1 - iVar5) {
              uVar4 = FUN_00b959a0(local_40,local_44);
              *(undefined4 *)(param_1 + 0xdc) = uVar4;
              cVar1 = FUN_01368510(param_1,*(undefined4 *)(param_1 + 0xdc),local_3c);
              if (cVar1 == '\0') {
                puVar6 = (undefined8 *)FUN_004095c0(0x10);
                *puVar6 = param_2;
                uVar7 = FUN_00b95a80(*(undefined4 *)(param_1 + 0xdc));
                puVar6[1] = uVar7;
                FUN_004ae7e0(*(undefined8 *)(param_1 + 0xe8),puVar6);
                cVar1 = FUN_0198a580(param_2);
                if (((cVar1 == '\x04') &&
                    (iVar5 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xd0),param_2), iVar5 == -1)) &&
                   (iVar5 = (**(code **)(*param_2 + 0x1c8))(param_2), iVar5 < 6)) {
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd0),param_2);
                }
              }
            }
          }
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
}

