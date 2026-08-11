/* Ghidra address: 00c53360 */
/* Ghidra symbol: FUN_00c53360 */


void FUN_00c53360(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_50 [2];
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_50[0] = 0;
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_00c53100(0,&PTR_FUN_00c52ff8);
  *(undefined4 *)(lVar1 + 8) = param_3;
  FUN_00416910(lVar1 + 0x10c,local_res10[0],0xff);
  FUN_00c53500(local_50,local_res10[0]);
  FUN_00416910(lVar1 + 0xc,local_50[0],0xff);
  *(undefined8 *)(lVar1 + 0x240) = local_3c;
  *(undefined8 *)(lVar1 + 0x248) = uStack_34;
  *(undefined4 *)(lVar1 + 0x250) = uStack_2c;
  (**(code **)(*param_1 + 0x20))(param_1,lVar1);
  FUN_00414480(local_50);
  FUN_00414480(local_res10);
  return;
}

