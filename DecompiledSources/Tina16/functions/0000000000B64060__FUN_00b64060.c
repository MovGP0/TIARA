/* Ghidra address: 00b64060 */
/* Ghidra symbol: FUN_00b64060 */


void FUN_00b64060(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  
  uVar3 = FUN_00b41d60(&DAT_00b40980,1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x60) = uVar3;
  iVar1 = FUN_00b59a10();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),iVar5);
      iVar2 = FUN_00b58340();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),iVar5);
          uVar3 = FUN_00b58320(*(undefined8 *)(lVar4 + 0x50),iVar6);
          FUN_00b63950(auStack_48,uVar3,iVar5);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00b59a10();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),iVar5);
      iVar2 = FUN_00b39eb0();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + 8),iVar5);
          uVar3 = FUN_00b39de0(*(undefined8 *)(lVar4 + 0x78),iVar6);
          FUN_00b63be0(auStack_48,uVar3,iVar5);
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b437d0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x60));
  return;
}

