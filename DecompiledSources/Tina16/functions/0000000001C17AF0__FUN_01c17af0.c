/* Ghidra address: 01c17af0 */
/* Ghidra symbol: FUN_01c17af0 */


void FUN_01c17af0(longlong *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_res20;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar1 = param_1[0xf];
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01bdee40);
  if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x4f8) == '\0')) {
    FUN_007e8d80(&local_40,local_res20);
    FUN_00414b50(&local_res20,local_40);
  }
  uStack_30 = param_2[1];
  local_38 = (int)*param_2;
  _local_38 = CONCAT44((int)((ulonglong)*param_2 >> 0x20),local_38 + 1);
  FUN_005ff880(param_1[0x62],*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
  lVar1 = *(longlong *)(param_1[0x62] + 0x70);
  uVar3 = (**(code **)(*param_1 + 0x98))(param_1);
  uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),uVar3,
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  FUN_005fcc80(lVar1,uVar3);
  FUN_01c17620(param_1,local_res20,&local_38,*param_3 | 0x500);
  FUN_01c17620(param_1,local_res20,&local_38,*param_3);
  FUN_00414480(&local_40);
  FUN_00414480(&local_res20);
  return;
}

