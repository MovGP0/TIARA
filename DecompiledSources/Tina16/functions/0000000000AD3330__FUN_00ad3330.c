/* Ghidra address: 00ad3330 */
/* Ghidra symbol: FUN_00ad3330 */


char FUN_00ad3330(longlong param_1,longlong *param_2,char param_3)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong local_40 [2];
  
  local_40[0] = 0;
  sVar2 = *(short *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) +
                    0x20);
  if ((sVar2 == 0x22) || (sVar2 == 0x27)) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  if (cVar4 != '\0') {
    uVar1 = *(undefined1 *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0x44);
    FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30));
    while ((sVar3 = *(short *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0x20
                              ), sVar3 != sVar2 && (sVar3 != 0))) {
      if (sVar3 == 0xd) {
        if (param_3 == '\0') {
          iVar7 = 0;
          if (*param_2 != 0) {
            iVar7 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar7 + 1);
          lVar5 = FUN_00414de0(param_2);
          iVar7 = 0;
          if (*param_2 != 0) {
            iVar7 = *(int *)(*param_2 + -4);
          }
          *(undefined2 *)(lVar5 + -2 + (longlong)iVar7 * 2) = 0x20;
        }
        else {
          iVar7 = 0;
          if (*param_2 != 0) {
            iVar7 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar7 + 2);
          uVar6 = FUN_00416740(&LAB_00ad36e4);
          lVar5 = FUN_00414de0(param_2);
          FUN_00409a70(uVar6,lVar5 + -2 + (longlong)(iVar7 + 1) * 2,4);
        }
        FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30));
      }
      else if (sVar3 == 0x26) {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0xe8)
        ;
        lVar5 = FUN_004aeac0(lVar5,*(int *)(lVar5 + 0x10) + -1);
        FUN_00ae7160(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30),
                     local_40,*(undefined4 *)(lVar5 + 0x70));
        lVar5 = local_40[0];
        iVar7 = 0;
        if (local_40[0] != 0) {
          iVar7 = *(int *)(local_40[0] + -4);
        }
        if (0 < iVar7) {
          iVar8 = 0;
          if (*param_2 != 0) {
            iVar8 = *(int *)(*param_2 + -4);
          }
          FUN_004169f0(param_2,iVar8 + iVar7);
          uVar6 = FUN_00416740(lVar5);
          lVar5 = FUN_00414de0(param_2);
          FUN_00409a70(uVar6,lVar5 + -2 + (longlong)(iVar8 + 1) * 2,(longlong)(iVar7 * 2));
        }
      }
      else {
        iVar7 = 0;
        if (*param_2 != 0) {
          iVar7 = *(int *)(*param_2 + -4);
        }
        FUN_004169f0(param_2,iVar7 + 1);
        lVar5 = FUN_00414de0(param_2);
        iVar7 = 0;
        if (*param_2 != 0) {
          iVar7 = *(int *)(*param_2 + -4);
        }
        *(short *)(lVar5 + -2 + (longlong)iVar7 * 2) = sVar3;
        FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30));
      }
    }
    if (*(short *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0x20
                  ) == sVar2) {
      FUN_00ad1170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30));
    }
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x110) + 0x30) + 0x44) = uVar1;
  }
  FUN_00414480(local_40);
  return cVar4;
}

