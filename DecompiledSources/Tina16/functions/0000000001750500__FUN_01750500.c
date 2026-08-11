/* Ghidra address: 01750500 */
/* Ghidra symbol: FUN_01750500 */


void FUN_01750500(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar2 = FUN_0175ad40(param_1,param_2), cVar2 != '\0')) ||
      (local_res18 != 0)) &&
     (plVar1 = *(longlong **)(param_1 + 0x28), *(char *)((longlong)plVar1 + 0xb) == '\0')) {
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
      if (*(char *)((longlong)param_2 + 0x12d) != '\0') goto LAB_017506d3;
    }
    if (param_2 != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                        (*(longlong **)(param_1 + 0x28),param_2);
      (**(code **)(*param_2 + 0xb8))(param_2,uVar3);
    }
    local_88 = 0xff;
    local_80 = *(uint *)(param_1 + 0x3c) & 1;
    FUN_01750230(auStack_a8,0,0xfffffff0,4);
    local_88 = 0x8080;
    local_80 = *(uint *)(param_1 + 0x3c) & 2;
    FUN_01750230(auStack_a8,0,0,4);
    local_88 = 0x8000;
    local_80 = *(uint *)(param_1 + 0x3c) & 4;
    FUN_01750230(auStack_a8,0,0x10,4);
    if (*(char *)(param_1 + 8) != '\0') {
      FUN_0173d380(param_1,param_2,local_res18,local_res20);
    }
  }
LAB_017506d3:
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

