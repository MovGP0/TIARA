/* Ghidra address: 00c53470 */
/* Ghidra symbol: FUN_00c53470 */


void FUN_00c53470(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar1 = *(undefined4 *)(param_4 + 2);
  lVar4 = FUN_00c53100(0,&PTR_FUN_00c52ff8);
  *(undefined4 *)(lVar4 + 8) = param_3;
  *(undefined1 *)(lVar4 + 0x210) = 0;
  *(undefined8 *)(lVar4 + 0x218) = param_2;
  FUN_004100d0(lVar4 + 0xc,param_2);
  *(undefined8 *)(lVar4 + 0x240) = uVar2;
  *(undefined8 *)(lVar4 + 0x248) = uVar3;
  *(undefined4 *)(lVar4 + 0x250) = uVar1;
  (**(code **)(*param_1 + 0x20))(param_1,lVar4);
  return;
}

