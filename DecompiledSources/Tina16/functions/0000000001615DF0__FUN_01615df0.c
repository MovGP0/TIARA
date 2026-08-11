/* Ghidra address: 01615df0 */
/* Ghidra symbol: FUN_01615df0 */


undefined8 FUN_01615df0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_res8 [4];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = *(undefined8 *)(param_2 + 0x13980);
  FUN_01615910(local_res8[0],&local_38,&local_28,&DAT_01615f1c);
  iVar2 = FUN_0043fc00(local_28);
  iVar5 = -1;
  if (iVar2 == -1) {
    iVar5 = 0;
  }
  iVar3 = 0;
  if (iVar5 != 0) {
    iVar3 = FUN_01634fe0(uVar1,iVar2,local_38);
  }
  if (*(int *)(param_2 + 0x70) < iVar3) {
    *(int *)(param_2 + 0x70) = iVar3;
  }
  uVar4 = FUN_01615600(local_38);
  local_20 = CONCAT44(uVar4,iVar3);
  FUN_00414560(&local_50,6);
  FUN_00414480(local_res8);
  return local_20;
}

