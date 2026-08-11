/* Ghidra address: 008102b0 */
/* Ghidra symbol: FUN_008102b0 */


void FUN_008102b0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x72) = 1;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x490) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x490) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_00410f20(uVar1);
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  FUN_00786a00(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

