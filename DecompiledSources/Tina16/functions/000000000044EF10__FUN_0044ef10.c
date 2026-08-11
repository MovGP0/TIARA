/* Ghidra address: 0044ef10 */
/* Ghidra symbol: FUN_0044ef10 */


ulonglong FUN_0044ef10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 unaff_RDI;
  longlong local_30 [2];
  
  local_30[0] = 0;
  iVar1 = thunk_FUN_04125701(0,100,local_30);
  if (iVar1 == 0) {
    *param_1 = *(undefined4 *)(local_30[0] + 0x18);
    *param_2 = *(undefined4 *)(local_30[0] + 0x1c);
  }
  else {
    *param_1 = 0;
    *param_2 = 0;
  }
  if (local_30[0] != 0) {
    thunk_FUN_03bb8870(local_30[0]);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar1 == 0) & 0xffffffff;
}

