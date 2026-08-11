/* Ghidra address: 01544580 */
/* Ghidra symbol: FUN_01544580 */


longlong FUN_01544580(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_015444b0(param_1);
  if (cVar1 == '\0') {
    lVar2 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) < *(int *)(param_1 + 0x18)) {
        *(undefined4 *)(param_1 + 0x18) = 1;
      }
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) + -1);
    } while (*(int *)(lVar2 + 0x14) != 1);
  }
  return lVar2;
}

