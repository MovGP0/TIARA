/* Ghidra address: 0123f7f0 */
/* Ghidra symbol: FUN_0123f7f0 */


longlong *
FUN_0123f7f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,double param_7)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_2);
  FUN_01d38290(plVar2,1);
  FUN_00414ad0(plVar2 + 0x13,local_res18[0]);
  *(undefined4 *)((longlong)plVar2 + 0xc) = param_4;
  *(undefined4 *)(plVar2 + 2) = param_5;
  *(undefined1 *)((longlong)plVar2 + 0xd1) = param_6;
  if (0.0 < param_7) {
    cVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2,0,&local_20);
    if (cVar1 == '\x03') {
      uVar3 = FUN_01194fd0(param_7);
      FUN_01d3a010(local_20,3,uVar3);
    }
    if (cVar1 == '\x06') {
      uVar3 = FUN_01194fd0(param_7);
      FUN_01d3a010(local_20,6,uVar3);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),plVar2);
  FUN_00414480(local_res18);
  return plVar2;
}

