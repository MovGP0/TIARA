/* Ghidra address: 00a1afe0 */
/* Ghidra symbol: FUN_00a1afe0 */


undefined8 FUN_00a1afe0(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char local_4e [4];
  char local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  byte local_43;
  
  puVar2 = (undefined8 *)param_1[5];
  lVar5 = puVar2[1];
  if (lVar5 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    lVar5 = puVar2[1];
  }
  uVar1 = *(undefined1 *)*puVar2;
  lVar5 = lVar5 + -1;
  if (lVar5 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    puVar6 = (undefined1 *)*puVar2;
    lVar5 = puVar2[1];
  }
  else {
    puVar6 = (undefined1 *)*puVar2 + 1;
  }
  uVar10 = CONCAT11(uVar1,*puVar6) - 2;
  lVar5 = lVar5 + -1;
  pcVar7 = puVar6 + 1;
  if ((int)uVar10 < 0xe) {
    uVar11 = uVar10;
    uVar9 = 0;
    if ((int)uVar10 < 1) goto LAB_00a1b0b5;
  }
  else {
    uVar11 = 0xe;
  }
  lVar8 = 0;
  do {
    if (lVar5 == 0) {
      iVar4 = (*(code *)puVar2[3])(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      pcVar7 = (char *)*puVar2;
      lVar5 = puVar2[1];
    }
    local_4e[lVar8] = *pcVar7;
    lVar5 = lVar5 + -1;
    pcVar7 = pcVar7 + 1;
    lVar8 = lVar8 + 1;
    uVar9 = uVar11;
  } while ((uint)lVar8 < uVar11);
LAB_00a1b0b5:
  iVar4 = uVar10 - uVar9;
  if (*(int *)((longlong)param_1 + 0x21c) == 0xee) {
    if ((((uVar9 < 0xc) || (local_4e[0] != 'A')) || (local_4e[1] != 'd')) ||
       (((local_4e[2] != 'o' || (local_4e[3] != 'b')) || (local_4a != 'e')))) {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x4e;
      *(uint *)(lVar8 + 0x2c) = uVar10;
      (**(code **)(lVar8 + 8))(param_1,1);
    }
    else {
      lVar8 = *param_1;
      *(uint *)(lVar8 + 0x2c) = (uint)CONCAT11(local_49,local_48);
      *(uint *)(lVar8 + 0x30) = (uint)CONCAT11(local_47,local_46);
      *(uint *)(lVar8 + 0x34) = (uint)CONCAT11(local_45,local_44);
      *(uint *)(lVar8 + 0x38) = (uint)local_43;
      *(undefined4 *)(lVar8 + 0x28) = 0x4c;
      (**(code **)(lVar8 + 8))(param_1,1);
      *(undefined4 *)(param_1 + 0x30) = 1;
      *(byte *)((longlong)param_1 + 0x184) = local_43;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x21c) == 0xe0) {
    FUN_00a1b6d0(param_1,local_4e,uVar9,iVar4);
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x44;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
    (*(code *)*puVar3)(param_1);
  }
  *puVar2 = pcVar7;
  puVar2[1] = lVar5;
  if (0 < iVar4) {
    (**(code **)(param_1[5] + 0x20))(param_1,iVar4);
  }
  return 1;
}

