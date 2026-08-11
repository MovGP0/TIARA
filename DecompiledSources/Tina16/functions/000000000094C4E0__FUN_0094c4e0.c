/* Ghidra address: 0094c4e0 */
/* Ghidra symbol: FUN_0094c4e0 */


longlong FUN_0094c4e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_008b85a0(local_res8,0,param_3);
  uVar3 = FUN_0094aa50(&PTR_FUN_00906c68,1,*(undefined8 *)(local_res8 + 0x18));
  *(undefined8 *)(local_res8 + 0x48) = uVar3;
  *(undefined2 *)(local_res8 + 0x78) = 0x6fa;
  *(undefined1 *)(local_res8 + 0x40) = 0;
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090df78);
  if (cVar2 == '\0') {
    *(undefined8 *)(local_res8 + 0x60) = 0;
  }
  else {
    uVar3 = FUN_004113f0(param_3,&PTR_FUN_0090df78);
    *(undefined8 *)(local_res8 + 0x60) = uVar3;
  }
  lVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(local_res8 + 0x50) = lVar4;
  FUN_00414480(lVar4 + 0x18);
  FUN_004b2bd0(*(undefined8 *)(local_res8 + 0x50),0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

