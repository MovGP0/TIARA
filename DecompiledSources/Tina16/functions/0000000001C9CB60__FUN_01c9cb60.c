/* Ghidra address: 01c9cb60 */
/* Ghidra symbol: FUN_01c9cb60 */


void FUN_01c9cb60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [24];
  
  iVar1 = *(int *)(param_1 + 0x1b40);
  if (iVar1 != -1) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4b0);
    FUN_00498350(local_38,iVar1 * iVar2,0,(iVar1 + 1) * iVar2,
                 *(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4b4));
    FUN_01c72fc0(param_1,param_2,iVar1,1,local_38,0);
  }
  return;
}

