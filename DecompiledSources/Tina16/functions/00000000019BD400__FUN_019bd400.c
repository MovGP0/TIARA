/* Ghidra address: 019bd400 */
/* Ghidra symbol: FUN_019bd400 */


longlong *
FUN_019bd400(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,undefined8 *param_5,
            undefined8 param_6,char param_7,char *param_8)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_5;
  local_res20 = param_4;
  FUN_00414610(param_4);
  plVar3 = (longlong *)0x0;
  *param_8 = '\0';
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar2 = (longlong *)FUN_019a43f0(*(longlong *)(param_1 + 0x18),local_res20,0);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
      *param_8 = '\x01';
    }
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,param_3);
    FUN_01d38290(plVar3,1);
    FUN_00414ad0(plVar3 + 0x13,local_res20);
  }
  *(undefined4 *)((longlong)plVar3 + 0xc) = (undefined4)local_20;
  *(undefined4 *)(plVar3 + 2) = local_20._4_4_;
  if (((param_7 != '\0') && (*param_8 == '\0')) &&
     ((param_3 == 9 || (((param_3 == 0xb || (param_3 == 10)) || (param_3 == 0xe)))))) {
    cVar1 = (**(code **)(*plVar3 + 0x2d0))(plVar3,0,&local_28);
    if (cVar1 == '\x03') {
      FUN_01d3a010(local_28,3,param_6);
    }
    if (cVar1 == '\x06') {
      FUN_01d3a010(local_28,6,param_6);
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2,plVar3);
  FUN_00414480(&local_res20);
  return plVar3;
}

