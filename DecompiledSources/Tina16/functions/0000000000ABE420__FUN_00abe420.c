/* Ghidra address: 00abe420 */
/* Ghidra symbol: FUN_00abe420 */


longlong FUN_00abe420(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00ac2700(local_res8,0,param_3,param_4);
  plVar3 = (longlong *)FUN_006e6120(&PTR_FUN_006bbb78,1,0);
  *(longlong **)(local_res8 + 0x1a0) = plVar3;
  local_20 = *(longlong *)(param_4 + 0x1a0);
  local_48 = *(undefined4 *)(local_20 + 0x9c);
  (**(code **)(*plVar3 + 400))
            (plVar3,*(undefined4 *)(local_20 + 0x90),*(undefined4 *)(local_20 + 0x94),
             *(undefined4 *)(local_20 + 0x98));
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x1a0),
               *(undefined1 *)(*(longlong *)(param_4 + 0x1a0) + 0xa9));
  (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x130))
            (*(longlong **)(local_res8 + 0x1a0),
             *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0));
  uVar2 = FUN_006e65a0(*(undefined8 *)(param_4 + 0x1a0));
  FUN_006e6860(*(undefined8 *)(local_res8 + 0x1a0),uVar2);
  uVar2 = FUN_006e65f0(*(undefined8 *)(param_4 + 0x1a0));
  FUN_006e6920(*(undefined8 *)(local_res8 + 0x1a0),uVar2);
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(param_4 + 400);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

