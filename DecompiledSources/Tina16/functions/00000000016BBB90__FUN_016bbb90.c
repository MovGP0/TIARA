/* Ghidra address: 016bbb90 */
/* Ghidra symbol: FUN_016bbb90 */


bool FUN_016bbb90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar2 = *(byte *)(param_1 + 0x40);
  if (bVar2 < 6) {
    lVar1 = *(longlong *)(param_1 + 0x50) + -0x28 + (ulonglong)bVar2 * 0x28;
    FUN_016bb230(param_1,lVar1,lVar1 + 0x10);
    *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x244);
    *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x240);
    FUN_00414bf0(lVar1 + 0x18,*(undefined8 *)(param_1 + 0xd88));
    FUN_00414ad0(lVar1 + 0x20,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x220));
    FUN_00414ad0(*(longlong *)(param_1 + 0x10) + 0x220,local_res10[0]);
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
  }
  FUN_00414480(local_res10);
  return bVar2 < 5;
}

