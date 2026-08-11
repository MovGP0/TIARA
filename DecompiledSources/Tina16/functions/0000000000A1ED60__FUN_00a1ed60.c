/* Ghidra address: 00a1ed60 */
/* Ghidra symbol: FUN_00a1ed60 */


void FUN_00a1ed60(longlong *param_1,undefined1 param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  if (0xfffd < param_3) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0xb;
    (*(code *)*puVar2)(param_1);
  }
  puVar2 = (undefined8 *)param_1[5];
  puVar3 = (undefined1 *)*puVar2;
  *puVar2 = puVar3 + 1;
  *puVar3 = 0xff;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar5 = (*(code *)puVar2[3])(param_1);
    if (iVar5 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (longlong *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (longlong)(puVar3 + 1);
  *puVar3 = param_2;
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar5 = (*(code *)plVar4[3])(param_1);
    if (iVar5 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (longlong *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (longlong)(puVar3 + 1);
  *puVar3 = (char)(param_3 + 2 >> 8);
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar5 = (*(code *)plVar4[3])(param_1);
    if (iVar5 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
      (*(code *)*puVar2)(param_1);
    }
  }
  plVar4 = (longlong *)param_1[5];
  puVar3 = (undefined1 *)*plVar4;
  *plVar4 = (longlong)(puVar3 + 1);
  *puVar3 = (char)(param_3 + 2);
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar5 = (*(code *)plVar4[3])(param_1);
    if (iVar5 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1ee54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}

