/* Ghidra address: 00a1ee60 */
/* Ghidra symbol: FUN_00a1ee60 */


void FUN_00a1ee60(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  plVar2 = (longlong *)param_1[5];
  puVar3 = (undefined1 *)*plVar2;
  *plVar2 = (longlong)(puVar3 + 1);
  *puVar3 = param_2;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar5 = (*(code *)plVar2[3])(param_1);
    if (iVar5 == 0) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1eea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_1);
      return;
    }
  }
  return;
}

