/* Ghidra address: 00541ec0 */
/* Ghidra symbol: FUN_00541ec0 */


void FUN_00541ec0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong local_30;
  
  lVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x7c);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(**(longlong **)(param_1 + 0xa8) + (longlong)iVar3 * 8);
      if ((lVar1 != 0) && (lVar1 = FUN_00545ee0(lVar1), lVar1 == *(longlong *)(param_2 + 8))) {
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 8);
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = (int)*(undefined8 *)(lVar1 + -8);
  }
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = (longlong)iVar3;
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 8) + lVar5 * 8);
      if ((lVar1 != 0) && (lVar1 = FUN_00545ee0(lVar1), lVar1 == *(longlong *)(param_2 + 8))) {
        lVar2 = *(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 8) + lVar5 * 8
                 );
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 8) + lVar5 * 8) = 0;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (lVar2 == 0) {
    local_30 = param_2;
    lVar2 = FUN_0055a150(&PTR_FUN_0053c7c8,1,0,0,&local_30);
  }
  *(longlong *)(**(longlong **)(param_1 + 0xa8) + (longlong)*(int *)(param_1 + 0x7c) * 8) = lVar2;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  return;
}

