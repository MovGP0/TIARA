/* Ghidra address: 00ef4110 */
/* Ghidra symbol: FUN_00ef4110 */


void FUN_00ef4110(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar5;
  ushort uVar6;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  int iVar4;
  
  local_50 = 0;
  local_48 = 0;
  FUN_00ef40a0(param_1,local_40);
  uVar2 = *(ushort *)(local_40[0] + 10);
  uVar6 = 0;
  iVar3 = 0x1d;
  do {
    FUN_00414480(&local_48);
    bVar1 = *(byte *)(local_40[0] + iVar3);
    iVar5 = 0;
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      iVar5 = iVar5 + 1;
      FUN_00416760(&local_50,*(undefined1 *)(local_40[0] + iVar3));
      FUN_00416ad0(&local_48,local_50);
    } while (iVar5 < (int)(uint)bVar1);
    FUN_00ef4000(&local_48);
    iVar3 = iVar4 + 2;
    uVar6 = uVar6 + bVar1 + 1;
    (**(code **)(*param_2 + 0x78))(param_2,local_48);
  } while (uVar6 < uVar2);
  FUN_00ef4210(local_40);
  FUN_00414560(&local_50,2);
  return;
}

