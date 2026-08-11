/* Ghidra address: 00ea7a10 */
/* Ghidra symbol: FUN_00ea7a10 */


byte * FUN_00ea7a10(byte *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = param_3;
  uVar2 = FUN_00ea4050(&DAT_00ea1f68,1);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar1 = FUN_00ea6c40(*param_1);
  FUN_00ea4d10(uVar2,uVar1);
  if ((param_3 & 0x80) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0xb) = 4;
  }
  FUN_00ea4de0(*(undefined8 *)(param_1 + 0x20),param_2);
  lVar3 = FUN_00ea6b50(&DAT_00ea69f0,1,*(undefined8 *)(param_1 + 0x20));
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x10;
  }
  FUN_0041b840(param_1 + 0x18,lVar3);
  if ((*param_1 & 0x10) != 0) {
    FUN_00ea33c0(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1;
}

