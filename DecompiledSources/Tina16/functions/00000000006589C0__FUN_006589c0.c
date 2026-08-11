/* Ghidra address: 006589c0 */
/* Ghidra symbol: FUN_006589c0 */


void FUN_006589c0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)PTR_DAT_02004030 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    do {
      lVar1 = lVar2;
      if (lVar1 == 0) break;
      lVar2 = *(longlong *)(lVar1 + 0x78);
    } while (*(longlong *)(lVar1 + 0x78) != 0);
    if (lVar1 != 0) {
      FUN_0064fca0(lVar1,0xb056,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
  }
  else {
    uVar3 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x460),*(undefined8 *)(param_1 + 0x468),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar3;
    thunk_FUN_0413e052(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),0xb056,
                       *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  return;
}

