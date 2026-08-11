/* Ghidra address: 01950e00 */
/* Ghidra symbol: FUN_01950e00 */


void FUN_01950e00(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_004aee30(*(longlong *)(param_1 + 0xe8),param_1);
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
  else {
    lVar1 = FUN_019538a0(param_1);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x178) == 0)) {
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x210) != 0)) {
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x210) + 0x4b0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(*(longlong *)(lVar1 + 0x178) + 0x718);
    }
  }
  return;
}

