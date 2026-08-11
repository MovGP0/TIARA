/* Ghidra address: 01cbfb50 */
/* Ghidra symbol: FUN_01cbfb50 */


void FUN_01cbfb50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01cbfd00(param_1,&local_10);
    FUN_01d31630(param_2,local_10);
    FUN_01d311c0(param_2,param_1 + 0x10,2);
    FUN_01d311c0(param_2,param_1 + 0x12,2);
    FUN_01d311c0(param_2,param_1 + 0x14,1);
    if (*(byte *)(param_1 + 0x14) != 0) {
      FUN_01d311c0(param_2,*(undefined8 *)(param_1 + 0x18),(uint)*(byte *)(param_1 + 0x14) * 4);
    }
  }
  FUN_00414480(&local_10);
  return;
}

