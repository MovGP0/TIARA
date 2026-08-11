/* Ghidra address: 009dad50 */
/* Ghidra symbol: FUN_009dad50 */


undefined4 FUN_009dad50(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_3 = 0;
  uVar2 = FUN_009dab20(param_1);
  uVar2 = FUN_00953870(&PTR_FUN_0090c3b8,1,uVar2);
  lVar3 = FUN_009d4b10(&PTR_FUN_009cec60,1,uVar2,param_1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x78;
  }
  FUN_0041b840(param_3,lVar3);
  uVar1 = (**(code **)(*(longlong *)*param_3 + 0xd8))((longlong *)*param_3,param_2);
  FUN_0041d630(uVar1);
  return 0;
}

