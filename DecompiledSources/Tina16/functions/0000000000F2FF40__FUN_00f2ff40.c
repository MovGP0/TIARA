/* Ghidra address: 00f2ff40 */
/* Ghidra symbol: FUN_00f2ff40 */


void FUN_00f2ff40(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if ((*(longlong *)(param_1 + 0x10) != 0) && (*(char *)(*(longlong *)(param_1 + 0x10) + 8) != '\0')
     ) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar1);
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(char *)(*(longlong *)(param_1 + 0x18) + 8) != '\0')
     ) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

