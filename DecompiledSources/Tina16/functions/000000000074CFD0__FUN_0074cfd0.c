/* Ghidra address: 0074cfd0 */
/* Ghidra symbol: FUN_0074cfd0 */


void FUN_0074cfd0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 local_30;
  
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    *(char *)(param_1 + 0x4e0) = param_2;
    if (param_2 == '\0') {
      pcVar9 = (code *)FUN_00411550(param_1,0xffc5);
      uVar7 = (*pcVar9)(param_1);
      cVar2 = FUN_00741090(uVar7,*(undefined1 *)(param_1 + 0x490));
      if (cVar2 == '\0') {
        uVar7 = *(undefined4 *)(param_1 + 0x90);
        iVar4 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8));
        local_30 = CONCAT44((*(int *)(param_1 + 0x94) - iVar4) - *(int *)(param_1 + 0x4e4),uVar7);
      }
      else if (cVar2 == '\x01') {
        iVar5 = FUN_0074cd30(*(undefined8 *)(param_1 + 0x4d8));
        iVar4 = *(int *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x98);
        iVar6 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8));
        local_30 = CONCAT44((*(int *)(param_1 + 0x94) - iVar6) - *(int *)(param_1 + 0x4e4),
                            (iVar4 + iVar3) - iVar5);
      }
      else if (cVar2 == '\x02') {
        iVar3 = FUN_0074cd30(*(undefined8 *)(param_1 + 0x4d8));
        iVar3 = *(int *)(param_1 + 0x98) - iVar3;
        iVar4 = *(int *)(param_1 + 0x90);
        iVar5 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8),(longlong)iVar3 % 2 & 0xffffffff);
        local_30 = CONCAT44((*(int *)(param_1 + 0x94) - iVar5) - *(int *)(param_1 + 0x4e4),
                            iVar4 + iVar3 / 2);
      }
    }
    else if (param_2 == '\x01') {
      pcVar9 = (code *)FUN_00411550(param_1,0xffc5);
      uVar7 = (*pcVar9)(param_1);
      cVar2 = FUN_00741090(uVar7,*(undefined1 *)(param_1 + 0x490));
      if (cVar2 == '\0') {
        local_30 = CONCAT44(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x9c) +
                            *(int *)(param_1 + 0x4e4),*(undefined4 *)(param_1 + 0x90));
      }
      else if (cVar2 == '\x01') {
        iVar4 = FUN_0074cd30(*(undefined8 *)(param_1 + 0x4d8));
        local_30 = CONCAT44(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x9c) +
                            *(int *)(param_1 + 0x4e4),
                            (*(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x98)) - iVar4);
      }
      else if (cVar2 == '\x02') {
        iVar4 = FUN_0074cd30(*(undefined8 *)(param_1 + 0x4d8));
        local_30 = CONCAT44(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x9c) +
                            *(int *)(param_1 + 0x4e4),
                            *(int *)(param_1 + 0x90) + (*(int *)(param_1 + 0x98) - iVar4) / 2);
      }
    }
    else if (param_2 == '\x02') {
      iVar5 = FUN_0074cd30(*(undefined8 *)(param_1 + 0x4d8));
      iVar4 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x4e4);
      iVar6 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8));
      local_30 = CONCAT44(*(int *)(param_1 + 0x94) + (*(int *)(param_1 + 0x9c) - iVar6) / 2,
                          (iVar4 - iVar5) - iVar3);
    }
    else if (param_2 == '\x03') {
      iVar4 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x98);
      iVar5 = *(int *)(param_1 + 0x4e4);
      iVar6 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8));
      local_30 = CONCAT44(*(int *)(param_1 + 0x94) + (*(int *)(param_1 + 0x9c) - iVar6) / 2,
                          iVar4 + iVar3 + iVar5);
    }
    plVar1 = *(longlong **)(param_1 + 0x4d8);
    uVar7 = FUN_0074cd30(plVar1);
    uVar8 = FUN_0074cd00(*(undefined8 *)(param_1 + 0x4d8));
    (**(code **)(*plVar1 + 400))(plVar1,local_30 & 0xffffffff,local_30._4_4_,uVar7,uVar8);
  }
  return;
}

