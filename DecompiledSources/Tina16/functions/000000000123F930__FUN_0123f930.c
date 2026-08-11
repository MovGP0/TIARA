/* Ghidra address: 0123f930 */
/* Ghidra symbol: FUN_0123f930 */


longlong * FUN_0123f930(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  
  plVar2 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,*(undefined2 *)(param_3 + 0x18));
  FUN_01d38290(plVar2,1);
  FUN_00414ad0(plVar2 + 0x13,*(undefined8 *)(param_3 + 8));
  *(undefined4 *)((longlong)plVar2 + 0xc) = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)(plVar2 + 2) = *(undefined4 *)(param_4 + 0x20);
  *(undefined1 *)((longlong)plVar2 + 0xd1) = *(undefined1 *)(param_4 + 0x24);
  FUN_0123b410(param_2,plVar2);
  if (0.0 < *(double *)(param_3 + 0x10)) {
    cVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2,0,local_40);
    if (cVar1 == '\x03') {
      uVar3 = FUN_01194fd0(*(undefined8 *)(param_3 + 0x10));
      FUN_01d3a010(local_40[0],3,uVar3);
    }
    if (cVar1 == '\x06') {
      uVar3 = FUN_01194fd0(*(undefined8 *)(param_3 + 0x10));
      FUN_01d3a010(local_40[0],6,uVar3);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(*(longlong **)(param_1 + 0x50),plVar2);
  return plVar2;
}

