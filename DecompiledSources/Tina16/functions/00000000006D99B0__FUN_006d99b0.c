/* Ghidra address: 006d99b0 */
/* Ghidra symbol: FUN_006d99b0 */


void FUN_006d99b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x4ab) != '\0') {
    *(undefined1 *)(param_1 + 0xfc) = 8;
  }
  FUN_0065aec0(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x4ab) != '\0') {
    uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x100) + 0x18) +
                                0x28),*(undefined4 *)(param_1 + 0x2cc),
                               *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    FUN_005fcc80(*(undefined8 *)(param_1 + 0xb8),uVar1);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),iVar4);
      lVar3 = FUN_006d8710(*(undefined8 *)(param_1 + 0x490),iVar4);
      uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar3 + 0x20),param_2,param_3);
      FUN_006d8600(uVar2,uVar1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

