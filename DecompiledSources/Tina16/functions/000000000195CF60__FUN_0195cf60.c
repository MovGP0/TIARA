/* Ghidra address: 0195cf60 */
/* Ghidra symbol: FUN_0195cf60 */


void FUN_0195cf60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = FUN_004170c0(&DAT_0195d02c,param_2,1);
    if (iVar2 == 1) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 8) = 2;
      FUN_00416dc0(*(longlong *)(param_1 + 0x208) + 0x30,param_2,2,0xff);
    }
    else {
      iVar2 = FUN_004170c0(&DAT_0195d03c,param_2,1);
      if (iVar2 == 1) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x208) + 8) = 1;
        FUN_00416dc0(*(longlong *)(param_1 + 0x208) + 0x30,param_2,2,0xff);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x208);
        *(undefined1 *)(lVar1 + 8) = 0;
        FUN_00414ad0(lVar1 + 0x30,param_2);
      }
    }
  }
  return;
}

