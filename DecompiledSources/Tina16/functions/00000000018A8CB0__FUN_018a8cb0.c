/* Ghidra address: 018a8cb0 */
/* Ghidra symbol: FUN_018a8cb0 */


void FUN_018a8cb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_006e23c0(*(undefined8 *)(*(longlong *)(param_1 + 0x500) + 0x4e8));
  iVar2 = FUN_006decb0(*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8) + 0x550));
  if (0 < iVar2) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x500) + 0x4e8);
    uVar3 = FUN_006df500(*(undefined8 *)(lVar1 + 0x550),0);
    FUN_006e24b0(lVar1,uVar3);
  }
  (**(code **)(**(longlong **)(param_1 + 0x550) + 600))(*(longlong **)(param_1 + 0x550));
  return;
}

