/* Ghidra address: 007ff200 */
/* Ghidra symbol: FUN_007ff200 */


void FUN_007ff200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_006485b0(*(undefined8 *)(*(longlong *)(param_2 + 8) + 8));
  if ((lVar1 == 0) || (*(char *)(*(longlong *)(param_2 + 8) + 0x10) == '\0')) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x658) != 0) {
      iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x658) + -8);
    }
    FUN_00419260(param_1 + 0x658,&DAT_007ed8e8,1,(longlong)(iVar2 + 1));
    *(undefined4 *)(*(longlong *)(param_1 + 0x658) + (longlong)iVar2 * 0x10) =
         **(undefined4 **)(param_2 + 8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x658) + 8 + (longlong)iVar2 * 0x10) =
         *(undefined8 *)(param_2 + 0x10);
  }
  return;
}

