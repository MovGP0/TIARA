/* Ghidra address: 00bbc340 */
/* Ghidra symbol: FUN_00bbc340 */


longlong FUN_00bbc340(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  plVar4 = (longlong *)FUN_00bbc490(local_res8,param_3,param_4);
  *(longlong **)(local_res8 + 8) = plVar4;
  iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
  iVar2 = iVar2 + (param_5 >> 1);
  *(int *)(local_res8 + 0x10) = iVar2 / (int)param_5;
  uVar3 = (**(code **)(**(longlong **)(local_res8 + 8) + 0x48))
                    (*(longlong **)(local_res8 + 8),
                     (longlong)iVar2 % (longlong)(int)param_5 & 0xffffffff);
  *(undefined4 *)(local_res8 + 0x14) = uVar3;
  *(uint *)(local_res8 + 0x18) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

