/* Ghidra address: 0055a4c0 */
/* Ghidra symbol: FUN_0055a4c0 */


longlong * FUN_0055a4c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  iVar5 = 0;
  iVar3 = **(int **)(param_1 + 0x48);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = (longlong)iVar4;
      if (((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 0) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 1)) &&
         (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 0)) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00419260(param_2,&DAT_00534170,1,(longlong)iVar5);
  iVar5 = 0;
  iVar3 = **(int **)(param_1 + 0x48);
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = (longlong)iVar4;
      if (((*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 0) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 1)) &&
         (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8) != 0)) {
        uVar2 = FUN_0055a490(auStack_48,
                             **(undefined8 **)
                               (*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + lVar1 * 8));
        *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_2;
}

