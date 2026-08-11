/* Ghidra address: 006610c0 */
/* Ghidra symbol: FUN_006610c0 */


void FUN_006610c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN_00662da0(param_1,*(undefined8 *)(param_1 + 0x90));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

