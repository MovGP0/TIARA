/* Ghidra address: 0064f7e0 */
/* Ghidra symbol: FUN_0064f7e0 */


undefined1
FUN_0064f7e0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_30 = auStack_68;
  local_21 = 0;
  if ((*(longlong *)(param_2 + 0x108) == 0) ||
     ((*(char *)(*(longlong *)(param_2 + 0x108) + 0x392) != '\0' &&
      (*(longlong *)(*(longlong *)(param_2 + 0x108) + 0x340) != 0)))) {
    local_20 = *(longlong *)(param_2 + 0x108);
    local_30 = auStack_68;
    if (local_20 != 0) {
      local_30 = auStack_68;
      (**(code **)(**(longlong **)(local_20 + 0x340) + 0x68))
                (*(longlong **)(local_20 + 0x340),param_2);
    }
    FUN_0064f3f0(param_1,local_20,0,1);
    if (local_20 != 0) {
      (**(code **)(**(longlong **)(local_20 + 0x340) + 0x68))(*(longlong **)(local_20 + 0x340),0);
    }
    local_21 = FUN_0064f3f0(param_2,param_3,param_4,param_5);
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x108);
    if (plVar1 != (longlong *)0x0) {
      local_48 = param_5;
      local_40 = param_1;
      local_21 = (**(code **)(*plVar1 + 0x200))(plVar1,param_2,param_3,param_4);
    }
  }
  return local_21;
}

