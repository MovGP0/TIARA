/* Ghidra address: 009daf20 */
/* Ghidra symbol: FUN_009daf20 */


undefined4 FUN_009daf20(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009dab20(param_1);
  uVar1 = FUN_00953db0(&PTR_FUN_0090d520,1,uVar1);
  lVar2 = FUN_009d4b10(&PTR_FUN_009d04b8,1,uVar1,param_1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x68;
  }
  FUN_0041b840(param_2,lVar2);
  return 0;
}

