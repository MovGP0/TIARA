/* Ghidra address: 00e08700 */
/* Ghidra symbol: FUN_00e08700 */


undefined1 FUN_00e08700(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res8 [4];
  undefined1 local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_30,local_res8[0]);
  FUN_00414b50(local_res8,local_30);
  iVar2 = 1;
  iVar3 = 0xc;
  do {
    iVar4 = iVar2 + (iVar3 - iVar2) / 2;
    lVar5 = (longlong)iVar4;
    FUN_004169a0(&local_38,&DAT_01edaa33 + lVar5 * 0x15);
    iVar1 = FUN_00416db0(local_res8[0],local_38);
    if (iVar1 == 0) {
      local_41 = 1;
      *param_2 = *(undefined4 *)(&DAT_01edab40 + lVar5 * 4);
      goto LAB_00e08810;
    }
    FUN_004169a0(&local_40,&DAT_01edaa33 + lVar5 * 0x15);
    iVar1 = FUN_00416d10(local_res8[0],local_40);
    if (iVar1 < 1) {
      iVar3 = iVar4 + -1;
    }
    else {
      iVar2 = iVar4 + 1;
    }
  } while (iVar2 <= iVar3);
  local_41 = 0;
LAB_00e08810:
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res8);
  return local_41;
}

