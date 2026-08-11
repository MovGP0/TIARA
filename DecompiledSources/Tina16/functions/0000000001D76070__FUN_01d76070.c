/* Ghidra address: 01d76070 */
/* Ghidra symbol: FUN_01d76070 */


void FUN_01d76070(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 in_RAX;
  bool bVar1;
  longlong local_30 [2];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    FUN_016ee1f0(param_1,local_30,8);
    FUN_01d75ed0(param_1,param_2,*(undefined1 *)(local_30[0] + 0x13),2,
                 *(undefined1 *)(local_30[0] + 0x10),param_3,local_30[0]);
    FUN_016ea050(param_1,local_30,8);
  }
  return;
}

