/* Ghidra address: 01b65790 */
/* Ghidra symbol: FUN_01b65790 */


void FUN_01b65790(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x7ed) == '\0') && (*(longlong *)(param_1 + 0x998) != 0)) {
    if (*(char *)(param_1 + 0xdb4) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 8))
                (*(longlong **)(param_1 + 0x9b0),0xb,*(undefined8 *)(param_1 + 0x998));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x9b0) + 8))
                (*(longlong **)(param_1 + 0x9b0),0xf,*(undefined8 *)(param_1 + 0x998));
    }
    lVar1 = *(longlong *)(param_1 + 0x998);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      FUN_01cc6030(lVar1);
    }
    *(undefined8 *)(param_1 + 0x998) = 0;
  }
  return;
}

