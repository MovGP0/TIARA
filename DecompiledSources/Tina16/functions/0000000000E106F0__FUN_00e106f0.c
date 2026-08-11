/* Ghidra address: 00e106f0 */
/* Ghidra symbol: FUN_00e106f0 */


longlong FUN_00e106f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_res10 [3];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar4 = FUN_00e0ffc0(param_1);
  cVar1 = FUN_00e0e4a0(*(undefined8 *)(param_1 + 0x828),local_res10[0],local_40);
  iVar2 = 0;
  iVar5 = *(int *)(lVar4 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      local_70 = FUN_004aeac0(lVar4,iVar2);
      FUN_0043e130(local_50,*(undefined8 *)(local_70 + 0x10));
      FUN_0043e130(&local_58,local_res10[0]);
      iVar3 = FUN_00416db0(local_50[0],local_58);
      if (iVar3 == 0) goto LAB_00e1080a;
      if (cVar1 != '\0') {
        FUN_0043e130(&local_60,*(undefined8 *)(local_70 + 0x10));
        FUN_0043e130(&local_68,local_40[0]);
        iVar3 = FUN_00416db0(local_60,local_68);
        if (iVar3 == 0) goto LAB_00e1080a;
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_70 = 0;
LAB_00e1080a:
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40);
  FUN_00414480(local_res10);
  return local_70;
}

