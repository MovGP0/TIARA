/* Ghidra address: 00d2a9d0 */
/* Ghidra symbol: FUN_00d2a9d0 */


undefined8 FUN_00d2a9d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_00d2aa20(param_1);
    lVar2 = FUN_00d21380(uVar1,1,0,0);
    *(longlong *)(param_1 + 0x88) = lVar2;
    *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(param_1 + 0x90);
  }
  return *(undefined8 *)(param_1 + 0x88);
}

