/* Ghidra address: 004bf6f0 */
/* Ghidra symbol: FUN_004bf6f0 */


void FUN_004bf6f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_004d3e30();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_004d3de0(param_2,iVar4);
      if ((*(byte *)(lVar2 + 0x58) & 4) != 0) {
        lVar2 = 0;
        if (*(longlong *)(param_1 + 0x158) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x158) + -8);
        }
        FUN_00419260(param_1 + 0x158,&DAT_004bf640,1,lVar2 + 1);
        lVar2 = 0;
        if (*(longlong *)(param_1 + 0x158) != 0) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x158) + -8);
        }
        uVar3 = FUN_004d3de0(param_2,iVar4);
        *(undefined8 *)(*(longlong *)(param_1 + 0x158) + -8 + lVar2 * 8) = uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

