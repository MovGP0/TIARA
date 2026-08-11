/* Ghidra address: 01c41970 */
/* Ghidra symbol: FUN_01c41970 */


undefined8 FUN_01c41970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar4 = 0;
  bVar5 = false;
  FUN_00414480(param_2);
  while (!bVar5) {
    iVar1 = FUN_01c232b0(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x900));
    if (iVar1 <= iVar4) break;
    lVar2 = FUN_01c233d0(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x900),iVar4);
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar2 = FUN_01c233d0(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x900),iVar4);
      FUN_004169a0(&local_20,*(longlong *)(lVar2 + 8) + 8);
      iVar1 = FUN_00416db0(local_res18[0],local_20);
      bVar5 = iVar1 == 0;
    }
    if (bVar5) {
      puVar3 = (undefined8 *)
               FUN_01c233d0(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x900),iVar4);
      FUN_00414ad0(param_2,*puVar3);
    }
    iVar4 = iVar4 + 1;
  }
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return param_2;
}

