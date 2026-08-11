/* Ghidra address: 018ac0e0 */
/* Ghidra symbol: FUN_018ac0e0 */


void FUN_018ac0e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (param_3 != 0) {
    if (*(longlong *)(param_3 + 0x18) == 0) {
      FUN_00414b50(local_30,*(undefined8 *)(param_3 + 0x10));
      iVar2 = FUN_004170c0(&LAB_018ac1f4,local_30[0],1);
      uVar3 = FUN_00414cb0(local_30[0]);
      FUN_00416dc0(local_30,local_30[0],iVar2 + 1,uVar3);
      uVar3 = FUN_0043fc00(local_30[0]);
      FUN_018a9020(param_1,uVar3);
    }
    else {
      DAT_02110674 = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 4);
      DAT_0211067c = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0xc);
      DAT_02110670 = 1;
      lVar1 = *(longlong *)(param_1 + 0x550);
      *(undefined4 *)(lVar1 + 0x50c) = **(undefined4 **)(param_3 + 0x18);
      FUN_018a6eb0(lVar1);
      FUN_018aba30(param_1);
    }
  }
  FUN_00414480(local_30);
  return;
}

