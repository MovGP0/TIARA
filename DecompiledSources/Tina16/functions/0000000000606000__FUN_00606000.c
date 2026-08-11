/* Ghidra address: 00606000 */
/* Ghidra symbol: FUN_00606000 */


undefined8 * FUN_00606000(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_00414480(param_2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    iVar2 = thunk_FUN_03c7aa97(*(undefined8 *)(lVar1 + 0x10),0,0);
    if (0 < iVar2) {
      FUN_004169f0(param_2,iVar2);
      uVar4 = FUN_00416740(*param_2);
      thunk_FUN_03c7aa97(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),iVar2,uVar4);
      uVar4 = FUN_00416740(*param_2);
      iVar2 = FUN_00414d00(uVar4);
      FUN_00416e20(param_2,1,iVar2 + 1);
      uVar4 = FUN_00416740(*param_2);
      uVar3 = FUN_00414d00(uVar4);
      FUN_004169f0(param_2,uVar3);
    }
  }
  return param_2;
}

