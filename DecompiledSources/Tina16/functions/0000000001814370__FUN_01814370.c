/* Ghidra address: 01814370 */
/* Ghidra symbol: FUN_01814370 */


void FUN_01814370(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  FUN_01814710(param_1,&local_38,param_2,param_3);
  FUN_0041d830(local_30,local_38);
  FUN_00415980(local_20,3,&DAT_0181447c,local_30[0],&DAT_0181448c);
  uVar2 = FUN_00414df0(local_20);
  uVar1 = FUN_00414cd0(local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),uVar2,uVar1);
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  FUN_004144d0(local_20);
  return;
}

