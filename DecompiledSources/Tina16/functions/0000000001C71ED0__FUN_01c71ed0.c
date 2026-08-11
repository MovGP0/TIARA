/* Ghidra address: 01c71ed0 */
/* Ghidra symbol: FUN_01c71ed0 */


void FUN_01c71ed0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar2 = FUN_01c8cee0(param_1);
  if (cVar2 == '\0') {
    FUN_0041ddd0(local_20,PTR_PTR_02003828);
    uVar1 = *(undefined8 *)(param_1 + 0x27a8);
    uVar3 = FUN_017bb120(uVar1);
    plVar4 = (longlong *)FUN_017baeb0(&PTR_FUN_017bab40,local_20[0],uVar1,uVar3);
    FUN_01994f40(*(undefined8 *)(param_1 + 0x27a8),1);
    cVar2 = FUN_01993e20(*(undefined8 *)(param_1 + 0x27a8));
    if (cVar2 == '\0') {
      if (plVar4 != (longlong *)0x0) {
        FUN_017bb400(plVar4);
      }
    }
    else {
      FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),0,1,0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
    }
  }
  FUN_00414480(local_20);
  return;
}

