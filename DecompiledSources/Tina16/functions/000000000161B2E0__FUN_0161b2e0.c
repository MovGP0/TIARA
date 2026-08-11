/* Ghidra address: 0161b2e0 */
/* Ghidra symbol: FUN_0161b2e0 */


undefined8
FUN_0161b2e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_5 == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
  }
  FUN_00416ad0(local_res18,&DAT_0161b414);
  iVar4 = *(int *)(lVar3 + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(lVar3,iVar2);
      FUN_0161ae10(uVar1,local_30,param_4);
      FUN_00416cd0(local_res18,3,local_res18[0],local_30[0],&LAB_0161b428);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return param_2;
}

