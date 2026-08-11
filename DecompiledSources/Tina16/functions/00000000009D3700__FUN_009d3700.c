/* Ghidra address: 009d3700 */
/* Ghidra symbol: FUN_009d3700 */


undefined4 FUN_009d3700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00620bb8);
  if (cVar1 != '\0') {
    lVar3 = FUN_004113f0(param_2,&PTR_FUN_00620bb8);
    FUN_00414b50(&local_10,*(undefined8 *)(lVar3 + 0x40));
  }
  FUN_004168e0(local_20,local_10);
  uVar2 = FUN_006210f0(param_2,param_3,&DAT_009d37c8,0,local_20[0]);
  FUN_00414520(local_20);
  FUN_00414480(&local_10);
  return uVar2;
}

