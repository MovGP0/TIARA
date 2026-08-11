/* Ghidra address: 00803670 */
/* Ghidra symbol: FUN_00803670 */


void FUN_00803670(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x500) != 0) {
    lVar2 = 0;
    if ((*(ushort *)(param_2 + 10) != 0xffff) || (*(short *)(param_2 + 8) != 0)) {
      uVar1 = (uint)*(ushort *)(param_2 + 8);
      bVar3 = (*(ushort *)(param_2 + 10) & 0x10) != 0;
      if (bVar3) {
        uVar1 = thunk_FUN_03ecce03(*(undefined8 *)(param_2 + 0x10),*(ushort *)(param_2 + 8));
      }
      lVar2 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x500),(longlong)(int)uVar1,bVar3);
    }
    if (lVar2 == 0) {
      FUN_0080e230(DAT_02012668,0);
    }
    else {
      FUN_00648780(local_20,*(undefined8 *)(lVar2 + 0xb0));
      FUN_0080e230(DAT_02012668,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

