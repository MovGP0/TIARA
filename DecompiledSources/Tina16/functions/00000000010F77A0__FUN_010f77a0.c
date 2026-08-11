/* Ghidra address: 010f77a0 */
/* Ghidra symbol: FUN_010f77a0 */


void FUN_010f77a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x9c2) == '\0') {
    cVar1 = FUN_00f83630(param_2,param_1 + 0x9c8);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x9c0) == '\0') {
        FUN_010e8000(*(undefined8 *)(param_1 + 0x9b0),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x328),
                     *(undefined1 *)(param_1 + 0x9b8),*(undefined4 *)(param_1 + 0x9bc),
                     *(undefined1 *)(param_1 + 0x9c1));
        FUN_010f6de0(param_1,param_2);
        if (*(int *)(param_1 + 0x9bc) < 0x20) {
          *(int *)(param_1 + 0x9bc) = *(int *)(param_1 + 0x9bc) * 2;
        }
      }
      else {
        uVar2 = FUN_0065b870(param_1);
        FUN_00f83670(uVar2,param_2);
      }
    }
  }
  return;
}

