/* Ghidra address: 01954f80 */
/* Ghidra symbol: FUN_01954f80 */


undefined8 * FUN_01954f80(undefined8 *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01953f80(local_res8,0,param_3);
  FUN_00410ae0(*local_res8,local_res8 + 0x20);
  uVar3 = FUN_004170c0(L"Tfrx",local_res8[0x20],1);
  FUN_00416e20(local_res8 + 0x20,uVar3,4);
  uVar3 = FUN_004170c0(L"Control",local_res8[0x20],1);
  FUN_00416e20(local_res8 + 0x20,uVar3,7);
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_0191c328);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_01936058);
    if (cVar2 == '\0') {
      *(undefined4 *)(local_res8 + 0x41) = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
    }
    else {
      *(undefined4 *)(local_res8 + 0x41) = *(undefined4 *)(param_3 + 0x1f0);
    }
  }
  else {
    *(undefined4 *)(local_res8 + 0x41) = *(undefined4 *)(param_3 + 0x208);
  }
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

