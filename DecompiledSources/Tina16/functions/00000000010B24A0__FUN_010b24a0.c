/* Ghidra address: 010b24a0 */
/* Ghidra symbol: FUN_010b24a0 */


undefined8 FUN_010b24a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(local_30);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
      cVar1 = FUN_010af9d0(lVar3);
      if (cVar1 == '\0') {
        FUN_00441a10(&local_48,*(undefined8 *)(lVar3 + 0x30));
        FUN_0043e130(local_40,local_48);
        iVar2 = FUN_00416db0(local_40[0],local_res18[0]);
        if (iVar2 == 0) {
          if (*(longlong *)(lVar3 + 0x38) == 0) {
            FUN_00416cd0(local_30,3,local_30[0],*(undefined8 *)(lVar3 + 0x30),&LAB_010b2664);
          }
          else {
            FUN_00416cd0(local_30,5,local_30[0],*(undefined8 *)(lVar3 + 0x38),&DAT_010b2654,
                         *(undefined8 *)(lVar3 + 0x30),&LAB_010b2664);
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

