/* Ghidra address: 016d3ea0 */
/* Ghidra symbol: FUN_016d3ea0 */


undefined8 FUN_016d3ea0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  puVar1 = (undefined8 *)0x0;
  iVar5 = *(int *)(param_1 + 0x4a0);
  puVar3 = puVar1;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)(int)puVar3;
      uVar2 = thunk_FUN_0412a7bb(0x2002,(longlong)*(int *)(param_1 + 0x498));
      *(undefined8 *)(param_1 + 0x500 + lVar4 * 8) = uVar2;
      if (*(longlong *)(param_1 + 0x500 + lVar4 * 8) == 0) {
        FUN_016d4030(param_1);
        FUN_00414ad0(param_1 + 0x570,L"Error allocating wave buffer memory");
        return 0;
      }
      uVar2 = thunk_FUN_0416a623(*(undefined8 *)(param_1 + 0x500 + lVar4 * 8));
      *(undefined8 *)(param_1 + 0x548 + lVar4 * 8) = uVar2;
      if (*(longlong *)(param_1 + 0x548 + lVar4 * 8) == 0) {
        FUN_016d4030(param_1);
        FUN_00414ad0(param_1 + 0x570,L"Error Locking wave buffer memory");
        return 0;
      }
      puVar1 = *(undefined8 **)(param_1 + 0x528 + lVar4 * 8);
      *puVar1 = *(undefined8 *)(param_1 + 0x548 + lVar4 * 8);
      iVar5 = iVar5 + -1;
      puVar3 = (undefined8 *)(ulonglong)((int)puVar3 + 1);
    } while (iVar5 != 0);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}

