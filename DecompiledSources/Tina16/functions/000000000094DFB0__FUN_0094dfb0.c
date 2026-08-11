/* Ghidra address: 0094dfb0 */
/* Ghidra symbol: FUN_0094dfb0 */


undefined8 FUN_0094dfb0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  if (cVar1 == '\x01') {
    if ((char)param_1[8] == '\0') {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,L"xml:lang");
    }
    else {
      plVar3 = (longlong *)
               (**(code **)(*param_1 + 0x2d0))
                         (param_1,L"http://www.w3.org/XML/1998/namespace",L"lang");
    }
    if (plVar3 == (longlong *)0x0) {
      lVar2 = (**(code **)(*param_1 + 0x170))(param_1);
      if (lVar2 == 0) {
        FUN_00414520(param_2);
      }
      else {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
        (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
      }
    }
    else {
      (**(code **)(*plVar3 + 0x2e0))(plVar3,param_2);
    }
  }
  else if (cVar1 == '\x02') {
    lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar2 == 0) {
      FUN_00414520(param_2);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2d0))(param_1);
      (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
    }
  }
  else if ((byte)(cVar1 - 3U) < 5) {
    lVar2 = (**(code **)(*param_1 + 0x170))(param_1);
    if (lVar2 == 0) {
      FUN_00414520(param_2);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
      (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
    }
  }
  else if (cVar1 == '\v') {
    lVar2 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (lVar2 == 0) {
      FUN_00414520(param_2);
    }
    else {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
      (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
    }
  }
  else {
    FUN_00414520(param_2);
  }
  return param_2;
}

