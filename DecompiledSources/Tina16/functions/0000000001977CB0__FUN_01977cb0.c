/* Ghidra address: 01977cb0 */
/* Ghidra symbol: FUN_01977cb0 */


void FUN_01977cb0(longlong param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  if (*(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') {
    if (((*(char *)(param_1 + 0x1e9) != '\0') &&
        (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x48) != '\0')) &&
       (*(char *)(param_1 + 0x270) != '\0')) {
      FUN_0181cc80(*(undefined8 *)(param_1 + 0x230),param_2);
    }
    if (*(longlong *)(param_1 + 0x218) != 0) {
      FUN_018afe70(*(longlong *)(param_1 + 0x218),param_2,param_3);
    }
    if ((param_4 & *(char *)(*(longlong *)(param_1 + 0x1a8) + 0x20) == '\0') != 0) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  return;
}

