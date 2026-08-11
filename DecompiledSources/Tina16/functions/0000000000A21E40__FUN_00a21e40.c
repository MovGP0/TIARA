/* Ghidra address: 00a21e40 */
/* Ghidra symbol: FUN_00a21e40 */


void FUN_00a21e40(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x3b] = (longlong)puVar3;
  *puVar3 = FUN_00a22040;
  iVar1 = *(int *)((longlong)param_1 + 0x3c);
  if (iVar1 - 2U < 2) {
    if ((int)param_1[7] != 3) goto LAB_00a21ea8;
  }
  else if (iVar1 - 4U < 2) {
    if ((int)param_1[7] != 4) goto LAB_00a21ea8;
  }
  else if (iVar1 == 1) {
    if ((int)param_1[7] != 1) {
LAB_00a21ea8:
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 9;
      (*(code *)*puVar2)(param_1);
    }
  }
  else if ((int)param_1[7] < 1) goto LAB_00a21ea8;
  switch((int)param_1[10]) {
  case 1:
    if (*(int *)((longlong)param_1 + 0x4c) != 1) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x3c);
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        *puVar3 = FUN_00a220c0;
        pcVar4 = FUN_00a22190;
        goto LAB_00a21ee5;
      }
      if (iVar1 != 1) goto LAB_00a2200b;
    }
    pcVar4 = FUN_00a22050;
    goto LAB_00a21ee5;
  case 2:
    if (*(int *)((longlong)param_1 + 0x4c) != 3) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 2) {
LAB_00a2200b:
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x1b;
                    /* WARNING: Could not recover jumptable at 0x00a2201f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(param_1);
      return;
    }
    break;
  case 3:
    if (*(int *)((longlong)param_1 + 0x4c) != 3) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 3) {
      if (*(int *)((longlong)param_1 + 0x3c) == 2) {
        *puVar3 = FUN_00a220c0;
        pcVar4 = FUN_00a222a0;
        goto LAB_00a21ee5;
      }
      goto LAB_00a2200b;
    }
    break;
  case 4:
    if (*(int *)((longlong)param_1 + 0x4c) != 4) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 4) goto LAB_00a2200b;
    break;
  case 5:
    if (*(int *)((longlong)param_1 + 0x4c) != 4) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x3c) != 5) {
      if (*(int *)((longlong)param_1 + 0x3c) == 4) {
        *puVar3 = FUN_00a220c0;
        pcVar4 = FUN_00a223e0;
        goto LAB_00a21ee5;
      }
      goto LAB_00a2200b;
    }
    break;
  default:
    if (((int)param_1[10] != *(int *)((longlong)param_1 + 0x3c)) ||
       (*(int *)((longlong)param_1 + 0x4c) != (int)param_1[7])) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x1b;
      (*(code *)*puVar2)(param_1);
    }
  }
  pcVar4 = FUN_00a22220;
LAB_00a21ee5:
  puVar3[1] = pcVar4;
  return;
}

