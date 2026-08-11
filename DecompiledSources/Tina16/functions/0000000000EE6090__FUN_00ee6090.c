/* Ghidra address: 00ee6090 */
/* Ghidra symbol: FUN_00ee6090 */


longlong * FUN_00ee6090(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_2);
  *(undefined4 *)((longlong)plVar2 + 0xc) = 100;
  *(undefined4 *)(plVar2 + 2) = 100;
  FUN_017bf050(plVar2,0,local_res18[0]);
  uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  lVar3 = FUN_00409570(uVar1);
  plVar2[0x18] = lVar3;
  FUN_01d38290(plVar2,1);
  FUN_00414480(local_res18);
  return plVar2;
}

