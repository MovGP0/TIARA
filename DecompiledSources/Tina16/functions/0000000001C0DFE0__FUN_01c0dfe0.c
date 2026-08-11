/* Ghidra address: 01c0dfe0 */
/* Ghidra symbol: FUN_01c0dfe0 */


void FUN_01c0dfe0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414b50(local_20,local_res20);
  lVar4 = param_1[0xf];
  cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01bf3cc0);
  if ((cVar1 != '\0') && (*(char *)(lVar4 + 0x4f8) == '\0')) {
    iVar2 = FUN_004170c0(&LAB_01c0e184,local_20[0],1);
    if (0 < iVar2) {
      uVar3 = FUN_004170c0(&LAB_01c0e184,local_20[0],1);
      FUN_00416e20(local_20,uVar3,1);
    }
  }
  FUN_00414b50(&local_res20,local_20[0]);
  FUN_00423b50(param_2,6,0);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    lVar4 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar4 + 0x94));
  }
  else {
    lVar4 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar4 + 0x9c));
  }
  FUN_01bea860(param_1,param_2,param_3,local_res20);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

