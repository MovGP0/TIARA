/* Ghidra address: 00c53280 */
/* Ghidra symbol: FUN_00c53280 */


void FUN_00c53280(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar4 = FUN_00c53100(0,&PTR_FUN_00c52ff8);
  *(undefined4 *)(lVar4 + 8) = 0x104;
  FUN_00416910(lVar4 + 0x10c,local_res10[0],0xff);
  FUN_00416910(lVar4 + 0xc,local_res10[0],0xff);
  *(undefined8 *)(lVar4 + 0x240) = uVar2;
  *(undefined8 *)(lVar4 + 0x248) = uVar3;
  *(undefined4 *)(lVar4 + 0x250) = uVar1;
  (**(code **)(*param_1 + 0x20))(param_1,lVar4);
  FUN_00414480(local_res10);
  return;
}

