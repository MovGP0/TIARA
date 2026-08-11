/* Ghidra address: 00709e90 */
/* Ghidra symbol: FUN_00709e90 */


undefined4 FUN_00709e90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (cVar2 = FUN_004113d0(plVar1,&PTR_FUN_006abd68), cVar2 != '\0')
     ) {
    uVar3 = FUN_006d5fd0(plVar1,param_2,param_3);
    return uVar3;
  }
  uVar3 = 0xffffffff;
  (**(code **)(*plVar1 + 0xe0))(plVar1,&local_54);
  local_6c = local_54;
  uStack_64 = uStack_4c;
  local_5c = param_2;
  local_58 = param_3;
  cVar2 = FUN_00423210(&local_6c,&local_5c);
  if (cVar2 != '\0') {
    local_44 = param_2;
    local_40 = param_3;
    uVar4 = FUN_00786090(param_1);
    uVar3 = thunk_FUN_041b2403(uVar4,0x130d,0,&local_44);
  }
  return uVar3;
}

