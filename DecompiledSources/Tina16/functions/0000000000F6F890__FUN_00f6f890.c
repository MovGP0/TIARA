/* Ghidra address: 00f6f890 */
/* Ghidra symbol: FUN_00f6f890 */


undefined4 FUN_00f6f890(longlong param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  if (*(int *)(param_1 + 0x94) < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x44 + (longlong)param_2 * 8);
    *param_3 = *(undefined1 *)(param_1 + 0x48 + (longlong)param_2 * 8);
  }
  return uVar1;
}

