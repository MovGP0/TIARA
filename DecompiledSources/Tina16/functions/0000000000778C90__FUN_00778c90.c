/* Ghidra address: 00778c90 */
/* Ghidra symbol: FUN_00778c90 */


void FUN_00778c90(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  uVar2 = FUN_00785560(param_5);
  uVar1 = FUN_007854e0(uVar2);
  uVar2 = FUN_00785670(param_6);
  uVar2 = FUN_007855f0(uVar2);
  FUN_00778d10(param_1,param_2,&local_34,param_4,uVar1,uVar2,param_7);
  return;
}

