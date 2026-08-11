/* Ghidra address: 00661910 */
/* Ghidra symbol: FUN_00661910 */


void FUN_00661910(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  
  if ((param_3 == 0) &&
     (param_3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10), lVar1 = param_3,
     param_4 != '\0')) {
    do {
      param_3 = lVar1;
      lVar1 = *(longlong *)(param_3 + 0x18);
    } while (*(longlong *)(param_3 + 0x18) != 0);
  }
  if (param_4 == '\0') {
    *(longlong *)(param_2 + 0x18) = param_3;
    lVar1 = *(longlong *)(param_3 + 0x30);
    *(longlong *)(param_2 + 0x30) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x18) = param_2;
    }
    *(longlong *)(param_3 + 0x30) = param_2;
    lVar1 = *(longlong *)(param_3 + 0x28);
    *(longlong *)(param_2 + 0x28) = lVar1;
    if (*(longlong *)(lVar1 + 0x10) == param_3) {
      *(longlong *)(lVar1 + 0x10) = param_2;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(longlong *)(param_2 + 0x30) = param_3;
    lVar1 = *(longlong *)(param_3 + 0x18);
    *(longlong *)(param_2 + 0x18) = lVar1;
    if (lVar1 != 0) {
      *(longlong *)(lVar1 + 0x30) = param_2;
    }
    *(longlong *)(param_3 + 0x18) = param_2;
  }
  FUN_006608c0(*(undefined8 *)(param_3 + 0x28));
  FUN_00660d90(*(undefined8 *)(param_3 + 0x28));
  return;
}

