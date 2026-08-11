/* Ghidra address: 004d3b70 */
/* Ghidra symbol: FUN_004d3b70 */


longlong FUN_004d3b70(longlong param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = uVar3 + iVar4 >> 1;
      lVar1 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + (longlong)(int)uVar5 * 8);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar1 + 0x10),param_2);
      if (iVar2 < 0) {
        uVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if (iVar2 == 0) {
          *param_3 = uVar5;
          return lVar1;
        }
      }
    } while ((int)uVar3 <= iVar4);
  }
  *param_3 = uVar3;
  return 0;
}

