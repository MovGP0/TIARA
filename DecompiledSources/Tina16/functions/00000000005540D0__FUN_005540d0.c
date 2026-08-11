/* Ghidra address: 005540d0 */
/* Ghidra symbol: FUN_005540d0 */


undefined1 FUN_005540d0(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_00552420(*(undefined8 *)(param_1 + 0x30));
    uVar1 = *(undefined1 *)(lVar2 + 1);
  }
  return uVar1;
}

