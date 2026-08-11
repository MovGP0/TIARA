/* Ghidra address: 013cb810 */
/* Ghidra symbol: FUN_013cb810 */


undefined8 FUN_013cb810(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  
  if (param_3 < 8) {
    if (param_3 == 7) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,6);
      return param_2;
    }
    if (param_3 < 5) {
      if (param_3 == 4) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,3);
        return param_2;
      }
      if (param_3 < 2) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0);
        return param_2;
      }
      if (param_3 == 2) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,1);
        return param_2;
      }
      if (param_3 == 3) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,2);
        return param_2;
      }
    }
    else {
      if (param_3 == 5) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,4);
        return param_2;
      }
      if (param_3 == 6) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,5);
        return param_2;
      }
    }
  }
  else if (param_3 < 0xb) {
    if (param_3 == 10) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,9);
      return param_2;
    }
    if (param_3 == 8) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,7);
      return param_2;
    }
    if (param_3 == 9) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,8);
      return param_2;
    }
  }
  else {
    if (param_3 == 0xb) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,10);
      return param_2;
    }
    if (param_3 == 0xd) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2,0xb);
      return param_2;
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x800) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,2);
  return param_2;
}

