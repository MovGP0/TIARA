/* Ghidra address: 013ac900 */
/* Ghidra symbol: FUN_013ac900 */


undefined8 FUN_013ac900(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01d03060(param_2,&local_28,local_res18[0]);
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (sVar2 == 0x39) {
    cVar1 = FUN_01d04d40(param_2);
    if (cVar1 != '\0') {
      FUN_00414b50(local_20,*(undefined8 *)(param_2[0x35] + 0x38));
      goto LAB_013aca3c;
    }
  }
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_01d42040(uVar3);
  if (cVar1 == '\0') {
    FUN_00450070(&local_30,local_28,&DAT_013acb6c,&DAT_013acb7c,0);
    FUN_00414b50(&local_28,local_30);
    iVar5 = FUN_004170c0(&DAT_013acb7c,local_28,1);
    uVar4 = 0;
    if (local_28 != 0) {
      uVar4 = *(undefined4 *)(local_28 + -4);
    }
    FUN_00416dc0(local_20,local_28,iVar5 + 1,uVar4);
  }
  else {
    FUN_004169a0(local_20,param_2 + 0x36);
  }
LAB_013aca3c:
  iVar5 = FUN_004170c0(&DAT_013acb90,local_20[0],1);
  if (iVar5 != 0) {
    FUN_00416e20(local_20,iVar5,1);
    FUN_00416ea0(&DAT_013acba0,local_20,iVar5);
    iVar5 = FUN_004170c0(&DAT_013acbb4,local_20[0],1);
    if (iVar5 == 0) {
      iVar5 = FUN_004170c0(&LAB_013acbc4,local_20[0],1);
      if (iVar5 != 0) {
        FUN_00416dc0(local_20,local_20[0],1,iVar5 + -1);
      }
    }
    else {
      FUN_00416dc0(local_20,local_20[0],1,iVar5 + -1);
    }
  }
  FUN_00414ad0(param_1,local_20[0]);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return param_1;
}

