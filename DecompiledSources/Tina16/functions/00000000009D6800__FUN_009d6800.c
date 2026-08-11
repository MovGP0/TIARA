/* Ghidra address: 009d6800 */
/* Ghidra symbol: FUN_009d6800 */


undefined4 FUN_009d6800(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_38;
  undefined4 local_30;
  
  local_38 = 0;
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)(param_1 + 0x18) + 0x110))(*(longlong **)(param_1 + 0x18));
  iVar1 = (**(code **)*puVar2)();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar5 = *(longlong **)(param_1 + 0x18);
      plVar3 = (longlong *)(**(code **)(*plVar5 + 0x110))(plVar5);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,iVar6);
      (**(code **)(*plVar5 + 0x2a0))(plVar5,uVar4);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))(*(longlong **)(param_1 + 0x18));
  plVar5 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,uVar4);
  FUN_004168e0(&local_38,param_2);
  (**(code **)(*plVar5 + 0x2c0))(plVar5,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b0))(*(longlong **)(param_1 + 0x18),plVar5);
  local_30 = 0;
  FUN_00414520(&local_38);
  return local_30;
}

