/* Ghidra address: 014ac0b0 */
/* Ghidra symbol: FUN_014ac0b0 */


void FUN_014ac0b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_96;
  
  lVar3 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar3 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_96,0x6e);
  iVar1 = FUN_01d31a40(*param_1);
  if (iVar1 == 0) {
    puVar4 = &local_96;
    puVar5 = (undefined8 *)(lVar3 + 0xccd);
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
  }
  return;
}

