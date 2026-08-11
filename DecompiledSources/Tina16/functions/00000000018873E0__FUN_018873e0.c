/* Ghidra address: 018873e0 */
/* Ghidra symbol: FUN_018873e0 */


int * FUN_018873e0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_004aeac0(*(longlong *)(param_1 + 0x10),iVar1 + -1);
    lVar3 = (**(code **)*puVar2)(puVar2);
    if (lVar3 < 0x6aaaaaaa) goto LAB_0188741b;
  }
  FUN_01887af0(param_1);
LAB_0188741b:
  piVar4 = (int *)FUN_018889c0(*(undefined8 *)(param_1 + 8));
  *piVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  puVar2 = (undefined8 *)
           FUN_004aeac0(*(longlong *)(param_1 + 0x10),
                        *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
  iVar1 = (**(code **)*puVar2)(puVar2);
  piVar4[1] = iVar1;
  uVar5 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),
                       *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
  FUN_004b6dc0(uVar5,(longlong)piVar4[1]);
  return piVar4;
}

