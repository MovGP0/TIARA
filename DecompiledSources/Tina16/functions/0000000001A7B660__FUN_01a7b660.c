/* Ghidra address: 01a7b660 */
/* Ghidra symbol: FUN_01a7b660 */


void FUN_01a7b660(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc10) + 0x530);
  if (lVar1 == *(longlong *)(param_1 + 0xc18)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0xc08),0x5a);
    iVar2 = FUN_006d8150(*(undefined8 *)(param_1 + 0xc30));
    if (iVar2 == 1) {
      FUN_0084e320(*(undefined8 *)(param_1 + 0xe40),local_20,1,0);
      if (local_20[0] == 0) {
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0xe40),1,0,&LAB_01a7b7f4);
      }
      lVar1 = *(longlong *)(param_1 + 0xe40);
      iVar2 = FUN_00848250(lVar1,0);
      FUN_0064cc50(*(undefined8 *)(param_1 + 0xc08),(*(int *)(lVar1 + 0x4e0) + 3) * iVar2);
      lVar1 = *(longlong *)(param_1 + 0xc08);
      uVar3 = FUN_008003b0(param_1);
      uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x9c),uVar3,
                                 *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
      FUN_0064cc50(lVar1,uVar3);
    }
  }
  else if (lVar1 == *(longlong *)(param_1 + 0xc20)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0xc08),0x43);
  }
  else if (lVar1 == *(longlong *)(param_1 + 0xc28)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0xc08),0x77);
  }
  FUN_00414480(local_20);
  return;
}

