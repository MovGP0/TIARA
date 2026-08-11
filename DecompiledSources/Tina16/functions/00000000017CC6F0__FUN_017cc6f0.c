/* Ghidra address: 017cc6f0 */
/* Ghidra symbol: FUN_017cc6f0 */


void FUN_017cc6f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    cVar2 = FUN_01cc6060(*(longlong *)(param_1 + 0xb0));
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    cVar2 = FUN_01cc6030(*(longlong *)(param_1 + 0xb8));
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    cVar2 = FUN_01cc6030(*(longlong *)(param_1 + 0xc0));
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    cVar2 = FUN_01cc6030(*(longlong *)(param_1 + 200));
    if (cVar2 != '\0') {
      *(undefined8 *)(param_1 + 200) = 0;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0xe00) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xe08) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(lVar1 + 0xe10) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(lVar1 + 0xe18) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(lVar1 + 0xe20) = *(undefined8 *)(param_1 + 0xd0);
  }
  return;
}

