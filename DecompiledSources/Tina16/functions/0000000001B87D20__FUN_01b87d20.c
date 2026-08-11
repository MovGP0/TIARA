/* Ghidra address: 01b87d20 */
/* Ghidra symbol: FUN_01b87d20 */


longlong FUN_01b87d20(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_4;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar2 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_2);
  FUN_01d38290(lVar2,1);
  FUN_00414ad0(lVar2 + 0x98,local_res18[0]);
  local_20 = (undefined4)uVar1;
  *(undefined4 *)(lVar2 + 0xc) = local_20;
  uStack_1c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(lVar2 + 0x10) = uStack_1c;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),lVar2);
  FUN_00414480(local_res18);
  return lVar2;
}

