/* Ghidra address: 00a1bf00 */
/* Ghidra symbol: FUN_00a1bf00 */


void FUN_00a1bf00(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1[5];
  lVar5 = 0x1000 - *(longlong *)(lVar1 + 8);
  if ((lVar5 != 0) &&
     (lVar4 = FUN_00a09b50(*(undefined8 *)(lVar1 + 0x30),1,lVar5,*(undefined8 *)(lVar1 + 0x28)),
     lVar4 != lVar5)) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x25;
    (*(code *)*puVar2)(param_1);
  }
  iVar3 = FUN_00a09b80(*(undefined8 *)(lVar1 + 0x28));
  if (iVar3 == 0) {
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar2 + 5) = 0x25;
                    /* WARNING: Could not recover jumptable at 0x00a1bf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}

