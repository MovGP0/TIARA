/* Ghidra address: 0134f830 */
/* Ghidra symbol: FUN_0134f830 */


undefined8
FUN_0134f830(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00414630(param_6);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  uVar1 = FUN_00b959a0(param_2,param_3);
  uVar3 = FUN_00b95a80(uVar1);
  FUN_004ae7e0(uVar2,uVar3);
  FUN_0134f2e0(param_1,uVar2,0);
  FUN_0134f550(param_4,param_5);
  FUN_0134f800();
  FUN_004144d0(&param_6);
  return uVar2;
}

