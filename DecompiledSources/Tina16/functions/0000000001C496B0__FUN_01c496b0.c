/* Ghidra address: 01c496b0 */
/* Ghidra symbol: FUN_01c496b0 */


void FUN_01c496b0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if ((((*(char *)(lVar1 + 0x508) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x6f0) + 0x540) == '\0')) &&
      (*(char *)(*(longlong *)(param_1 + 0x6e8) + 0x5a8) == '\0')) &&
     (*(char *)(*(longlong *)(param_1 + 0x6e0) + 0x538) == '\0')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *param_3 = uVar2;
  *(undefined1 *)(lVar1 + 0x508) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6f0) + 0x540) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6e8) + 0x5a8) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x6e0) + 0x538) = 0;
  return;
}

