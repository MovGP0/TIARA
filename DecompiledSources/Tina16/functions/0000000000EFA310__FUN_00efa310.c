/* Ghidra address: 00efa310 */
/* Ghidra symbol: FUN_00efa310 */


void FUN_00efa310(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  if (*param_1 == 0) {
    lVar1 = FUN_004095c0(0x18);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      FUN_00ef4260(1,param_4);
      return;
    }
    puVar3 = (undefined1 *)*param_1;
  }
  else {
    lVar1 = *param_1;
    do {
      lVar2 = lVar1;
      lVar1 = *(longlong *)(lVar2 + 0x10);
    } while (*(longlong *)(lVar2 + 0x10) != 0);
    lVar1 = FUN_004095c0(0x18);
    *(longlong *)(lVar2 + 0x10) = lVar1;
    if (lVar1 == 0) {
      FUN_00ef4260(1,param_4);
      return;
    }
    puVar3 = *(undefined1 **)(lVar2 + 0x10);
  }
  *puVar3 = param_3;
  *(undefined8 *)(puVar3 + 8) = param_2;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  return;
}

