/* Ghidra address: 00a1ead0 */
/* Ghidra symbol: FUN_00a1ead0 */


void FUN_00a1ead0(longlong *param_1)

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
  *puVar3 = 0xd9;
  plVar1 = puVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1eb41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(param_1);
      return;
    }
  }
  return;
}

