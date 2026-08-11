/* Ghidra address: 0080f7c0 */
/* Ghidra symbol: FUN_0080f7c0 */


void FUN_0080f7c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (((*(longlong *)(DAT_02012670 + 0xd8) != lVar1) && (lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x4d6) != '\x02')) {
    uVar2 = FUN_0065b870(lVar1);
    FUN_008099d0(uVar2,9);
  }
  thunk_FUN_04161dbd(*(undefined8 *)(param_1 + 0x2d0));
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
  FUN_0080ad20(param_1,uVar2,0);
  FUN_0080ac80(param_1);
  FUN_0080aef0(param_1,1);
  if (*(longlong *)(DAT_02012670 + 200) != 0) {
    uVar2 = FUN_0065b870(*(longlong *)(DAT_02012670 + 200));
    thunk_FUN_03c244fb(uVar2);
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    (**(code **)(param_1 + 0x290))(*(undefined8 *)(param_1 + 0x298),param_1);
  }
  return;
}

