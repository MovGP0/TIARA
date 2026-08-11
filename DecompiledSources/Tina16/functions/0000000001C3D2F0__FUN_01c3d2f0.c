/* Ghidra address: 01c3d2f0 */
/* Ghidra symbol: FUN_01c3d2f0 */


void FUN_01c3d2f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    if (param_2 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x268))
                (*(longlong **)(param_1 + 0x708),0xffffffff);
    }
    else {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      if (-1 < iVar2) {
        plVar1 = *(longlong **)(param_1 + 0x708);
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar3,param_2);
      }
      thunk_FUN_03f3ed6d(0);
    }
  }
  else {
    *(longlong *)(param_1 + 0x930) = param_2;
  }
  return;
}

