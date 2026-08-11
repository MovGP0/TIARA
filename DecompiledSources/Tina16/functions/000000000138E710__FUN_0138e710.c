/* Ghidra address: 0138e710 */
/* Ghidra symbol: FUN_0138e710 */


undefined8 *
FUN_0138e710(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar5;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (((*PTR_DAT_02003720 == '\0') || (*PTR_DAT_02002b78 != '\0')) || (*PTR_DAT_02002fa0 != '\0')) {
    FUN_013973b0(&local_38,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x150),param_4
                 ,CONCAT44(uVar5,1),2,1,1);
    if (*PTR_DAT_02001b08 != '\0') {
      FUN_00c44460(local_58,0x3ff6a09e667f3bcd,0);
      FUN_00c44b60(&local_48,&local_38,local_58);
      local_38 = local_48;
      uStack_30 = uStack_40;
    }
  }
  else {
    FUN_01397500(&local_38,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x150),param_4
                 ,CONCAT44(uVar5,1),2,1,1);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x158) + 0x333) == '\0') {
    cVar1 = FUN_017d1390(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x4c0));
    if (cVar1 == '\0') {
      iVar2 = FUN_017d1380(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x4c0));
      if (iVar2 == 2) goto LAB_0138e887;
    }
    iVar2 = FUN_017d1380(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x4c0));
    if (iVar2 == 1) {
      FUN_0138e190(param_1,local_38,local_res18[0],0,0);
    }
    else if (*PTR_DAT_020052b8 == '\0') {
      FUN_0138e190(param_1,local_38,local_res18[0],0,&DAT_0138ea18);
    }
    else {
      FUN_0138e190(param_1,local_38,local_res18[0],0,0);
    }
  }
  else {
LAB_0138e887:
    if (*PTR_DAT_02001b08 != '\0') {
      FUN_00416ad0(local_res18,&DAT_0138ea18);
    }
    uVar3 = FUN_00c44590(&local_38);
    dVar4 = (double)FUN_00c445d0(&local_38);
    FUN_0138e190(param_1,uVar3,local_res18[0],dVar4 * 57.29577951308232,&DAT_0138ea2c);
  }
  *param_2 = local_38;
  param_2[1] = uStack_30;
  FUN_00414480(local_res18);
  return param_2;
}

