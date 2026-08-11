/* Ghidra address: 01d75100 */
/* Ghidra symbol: FUN_01d75100 */


void FUN_01d75100(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 in_RAX;
  byte bVar1;
  bool bVar2;
  longlong *local_30 [2];
  
  bVar1 = (char)param_3 - 8;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar1 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,local_30,8,0);
    FUN_01d74d10(*local_30[0] + 0x10,param_1,param_2,param_3,*local_30[0]);
  }
  return;
}

