/* Ghidra address: 006f7310 */
/* Ghidra symbol: FUN_006f7310 */


undefined8 FUN_006f7310(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_48 [6];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_30 = *param_2;
  local_48[0] = 0x40;
  local_28 = *(undefined4 *)(&DAT_01e01518 + (param_3 & 0xff) * 4);
  local_20 = local_30;
  uVar2 = FUN_0065b870(param_1);
  iVar1 = thunk_FUN_041b2403(uVar2,0x1053,0xffffffffffffffff,local_48);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar1);
  }
  return uVar2;
}

