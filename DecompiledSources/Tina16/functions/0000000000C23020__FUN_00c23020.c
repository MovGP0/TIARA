/* Ghidra address: 00c23020 */
/* Ghidra symbol: FUN_00c23020 */


void FUN_00c23020(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_418 [1024];
  
  FUN_00c22da0(param_1);
  iVar2 = thunk_FUN_041a3f2d(param_2,0,0x100,local_418);
  if (iVar2 != 0) {
    FUN_00c22fb0(param_1,iVar2);
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      puVar4 = local_418;
      iVar5 = iVar2;
      do {
        puVar1 = (undefined1 *)(param_1[1] + (longlong)iVar3 * 3);
        *puVar1 = *puVar4;
        puVar1[1] = puVar4[1];
        puVar1[2] = puVar4[2];
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(param_1 + 2) = iVar2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

