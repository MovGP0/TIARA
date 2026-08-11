/* Ghidra address: 0058a120 */
/* Ghidra symbol: FUN_0058a120 */


void FUN_0058a120(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_4 - param_3) {
    do {
      lVar1 = *(longlong *)
               (param_2 + (longlong)(int)(param_3 + ((uint)(param_4 - param_3) >> 1)) * 8);
      iVar4 = param_3;
      iVar5 = param_4;
      do {
        while (iVar3 = FUN_0058a080(param_1,*(longlong *)(param_2 + (longlong)iVar4 * 8) + 0x2a,
                                    lVar1 + 0x2a), iVar3 < 0) {
          iVar4 = iVar4 + 1;
        }
        while (iVar3 = FUN_0058a080(param_1,*(longlong *)(param_2 + (longlong)iVar5 * 8) + 0x2a,
                                    lVar1 + 0x2a), 0 < iVar3) {
          iVar5 = iVar5 + -1;
        }
        if (iVar4 <= iVar5) {
          if (iVar4 != iVar5) {
            uVar2 = *(undefined8 *)(param_2 + (longlong)iVar4 * 8);
            *(undefined8 *)(param_2 + (longlong)iVar4 * 8) =
                 *(undefined8 *)(param_2 + (longlong)iVar5 * 8);
            *(undefined8 *)(param_2 + (longlong)iVar5 * 8) = uVar2;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        }
      } while (iVar4 <= iVar5);
      if (param_3 < iVar5) {
        FUN_0058a120(param_1,param_2,param_3,iVar5);
      }
      param_3 = iVar4;
    } while (iVar4 < param_4);
  }
  return;
}

