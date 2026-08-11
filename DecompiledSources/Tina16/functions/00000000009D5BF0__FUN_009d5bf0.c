/* Ghidra address: 009d5bf0 */
/* Ghidra symbol: FUN_009d5bf0 */


undefined4 FUN_009d5bf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))(*(longlong **)(param_1 + 0x18));
    uVar1 = FUN_004113f0(uVar1,&PTR_FUN_0090fbe0);
    lVar2 = FUN_009da9e0(&PTR_FUN_009d0e08,1,DAT_02012ac8,uVar1,0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0xe8;
    }
    FUN_0041b840(param_1 + 0x38,lVar2);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x38));
  return 0;
}

