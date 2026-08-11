/* Ghidra address: 00b64d00 */
/* Ghidra symbol: FUN_00b64d00 */


void FUN_00b64d00(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 extraout_var;
  longlong lVar3;
  int iVar4;
  
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x1b);
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b21fe0(*(undefined8 *)(lVar3 + 0x48));
  lVar3 = (ulonglong)(uint)(iVar1 * 2) * 3;
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
               CONCAT62((int6)((ulonglong)lVar3 >> 0x10),(short)lVar3 + 2));
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar2 = FUN_00b21fe0(*(undefined8 *)(lVar3 + 0x48));
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b21fe0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      uVar2 = FUN_00b21fc0(*(undefined8 *)(lVar3 + 0x48),iVar4);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xff);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x1a);
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b21fe0(*(undefined8 *)(lVar3 + 0x48));
  lVar3 = (ulonglong)(uint)(iVar1 * 2) * 3;
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
               CONCAT62((int6)((ulonglong)lVar3 >> 0x10),(short)lVar3 + 2));
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  uVar2 = FUN_00b21fe0(*(undefined8 *)(lVar3 + 0x48));
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b21fe0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      FUN_00b21fc0(*(undefined8 *)(lVar3 + 0x48),iVar4);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),extraout_var);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0);
      FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xffffffff);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

