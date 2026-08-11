/* Ghidra address: 00b2e170 */
/* Ghidra symbol: FUN_00b2e170 */


void FUN_00b2e170(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  FUN_00b2dc50(auStack_58);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      pcVar3 = (char *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar6);
      FUN_004aedb0(*(undefined8 *)(param_1 + 0x20),iVar6,0);
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        if (**(char **)(pcVar3 + 5) == '(') {
          FUN_00b19560(*(undefined8 *)(param_1 + 0x30),pcVar3);
          iVar2 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38));
          if (0 < iVar2) {
            lVar4 = FUN_00b19520(*(undefined8 *)(param_1 + 0x38));
            *(int *)(lVar4 + 0x15) = *(int *)(lVar4 + 0x15) + 1;
          }
        }
        else if (**(char **)(pcVar3 + 5) == ')') {
          FUN_00b2de10(auStack_58,pcVar3);
          iVar2 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38));
          if (iVar2 < 1) {
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),pcVar3);
          }
          else {
            lVar4 = FUN_00b19520(*(undefined8 *)(param_1 + 0x38));
            *(int *)(lVar4 + 0x15) = *(int *)(lVar4 + 0x15) + -1;
            if (*(int *)(lVar4 + 0x15) == 0) {
              uVar5 = FUN_00b19540(*(undefined8 *)(param_1 + 0x38));
              FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar5);
              FUN_00b2d400(param_1,pcVar3);
            }
            else {
              FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),pcVar3);
            }
          }
        }
        else {
          FUN_00b2de10(auStack_58,pcVar3);
        }
      }
      else if (cVar1 == '\x01') {
        iVar2 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38));
        if (0 < iVar2) {
          lVar4 = FUN_00b19520(*(undefined8 *)(param_1 + 0x38));
          *(undefined1 *)(lVar4 + 0x19) = 1;
        }
        FUN_00b19560(*(undefined8 *)(param_1 + 0x38),pcVar3);
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        pcVar3[0x18] = '\0';
        pcVar3[0x19] = '\0';
      }
      else if (cVar1 == '\x02') {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),pcVar3);
        iVar2 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38));
        if (0 < iVar2) {
          lVar4 = FUN_00b19520(*(undefined8 *)(param_1 + 0x38));
          *(undefined1 *)(lVar4 + 0x19) = 1;
        }
      }
      else if (cVar1 == '\x03') {
        iVar2 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38));
        if (0 < iVar2) {
          lVar4 = FUN_00b19520(*(undefined8 *)(param_1 + 0x38));
          *(int *)(lVar4 + 0x11) = *(int *)(lVar4 + 0x11) + 1;
        }
        FUN_00b2de10(auStack_58,pcVar3);
        FUN_00b2d400(param_1,pcVar3);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  while (iVar7 = FUN_00b19580(*(undefined8 *)(param_1 + 0x30)), 0 < iVar7) {
    local_30 = FUN_00b19540(*(undefined8 *)(param_1 + 0x30));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),local_30);
  }
  while (iVar7 = FUN_00b19580(*(undefined8 *)(param_1 + 0x38)), 0 < iVar7) {
    uVar5 = FUN_00b19540(*(undefined8 *)(param_1 + 0x38));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar5);
  }
  FUN_00b2e020(auStack_58);
  FUN_00b2e0c0(auStack_58);
  return;
}

