/* Ghidra address: 014dc280 */
/* Ghidra symbol: FUN_014dc280 */


longlong * FUN_014dc280(longlong *param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *local_40 [2];
  
  plVar2 = (longlong *)FUN_014db750(0x78);
  FUN_017bf050(plVar2,0,param_2);
  *(bool *)((longlong)plVar2 + 0x531) = *param_2 == 0x58;
  uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  lVar3 = FUN_00409570(uVar1);
  plVar2[0x18] = lVar3;
  FUN_01d38290(plVar2,1);
  (**(code **)(*plVar2 + 0x2d0))(plVar2,1,local_40);
  (**(code **)(*(longlong *)*local_40[0] + 0x10))((longlong *)*local_40[0],param_4);
  (**(code **)(*param_1 + 0x20))(param_1,plVar2);
  FUN_014dc240(plVar2,param_3);
  return plVar2;
}

