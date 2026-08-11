/* Ghidra address: 010b1580 */
/* Ghidra symbol: FUN_010b1580 */


undefined1 FUN_010b1580(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_51 = 0;
  *param_4 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      FUN_010af640(uVar2,&local_40,0);
      FUN_0043e1a0(&local_38,local_40);
      FUN_004414c0(local_30,local_res10);
      FUN_00441920(&local_48,local_30[0]);
      FUN_00441920(&local_50,local_38);
      iVar1 = FUN_00416db0(local_48,local_50);
      if (iVar1 == 0) {
        local_51 = 1;
        *param_4 = uVar2;
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_50,5);
  FUN_00414560(&local_res10,2);
  return local_51;
}

