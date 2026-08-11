/* Ghidra address: 0162f0f0 */
/* Ghidra symbol: FUN_0162f0f0 */


void FUN_0162f0f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5,longlong param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_01613170(param_4);
  lVar2 = FUN_0162e870(param_1,*(undefined8 *)(param_5 + 0x58));
  if ((*(longlong *)(param_5 + 0xb8) == 0) ||
     ((((iVar1 != 0x34 && (iVar1 != 0x35)) && (iVar1 != 0x2b)) &&
      ((iVar1 != 0x38 && (iVar1 != 0x28)))))) {
    uVar3 = (**(code **)(PTR_PTR_02003958 + (longlong)iVar1 * 8 + -8))(param_2,param_3);
  }
  else {
    uVar3 = FUN_016aab50(param_2,param_3,*(undefined8 *)(param_5 + 0xb8),0,
                         *(undefined1 *)(*(longlong *)(param_6 + 0x38) + 0x89));
  }
  FUN_01615b20(lVar2,uVar3);
  *(undefined4 *)(lVar2 + 0x14) = 5;
  return;
}

