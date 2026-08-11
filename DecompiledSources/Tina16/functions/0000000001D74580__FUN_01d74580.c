/* Ghidra address: 01d74580 */
/* Ghidra symbol: FUN_01d74580 */


void FUN_01d74580(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  undefined8 in_RAX;
  bool bVar2;
  longlong *local_30 [2];
  
  if ((byte)(param_3 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_3 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && ((*(byte *)(param_2 + 0x88) & 0x20) == 0)) {
    FUN_016ee260(param_1,local_30,8,0);
    lVar1 = *local_30[0];
    FUN_01d74430(param_1,param_2,lVar1,*(undefined1 *)(lVar1 + 0x13),10,
                 *(undefined1 *)(lVar1 + 0x10),param_3);
    FUN_016ea050(param_1,local_30,8);
  }
  return;
}

