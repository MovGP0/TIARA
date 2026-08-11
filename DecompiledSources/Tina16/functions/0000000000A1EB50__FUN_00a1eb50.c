/* Ghidra address: 00a1eb50 */
/* Ghidra symbol: FUN_00a1eb50 */


void FUN_00a1eb50(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd8;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  if (param_1[0xc] != 0) {
    FUN_00a1eeb0(param_1,0);
  }
  if (param_1[0xd] != 0) {
    FUN_00a1eeb0(param_1,1);
  }
  if (param_1[0xe] != 0) {
    FUN_00a1eeb0(param_1,2);
  }
  if (param_1[0xf] != 0) {
    FUN_00a1eeb0(param_1,3);
  }
  if (*(int *)((longlong)param_1 + 0x104) == 0) {
    if (param_1[0x10] != 0) {
      FUN_00a1f400(param_1,0,0);
    }
    if (param_1[0x14] != 0) {
      FUN_00a1f400(param_1,0,1);
    }
    if (param_1[0x11] != 0) {
      FUN_00a1f400(param_1,1,0);
    }
    if (param_1[0x15] != 0) {
      FUN_00a1f400(param_1,1,1);
    }
    if (param_1[0x12] != 0) {
      FUN_00a1f400(param_1,2,0);
    }
    if (param_1[0x16] != 0) {
      FUN_00a1f400(param_1,2,1);
    }
    if (param_1[0x13] != 0) {
      FUN_00a1f400(param_1,3,0);
    }
    if (param_1[0x17] != 0) {
      FUN_00a1f400(param_1,3,1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xd9;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1ed51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}

