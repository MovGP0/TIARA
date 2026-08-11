/* Ghidra address: 00abda50 */
/* Ghidra symbol: FUN_00abda50 */


longlong FUN_00abda50(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 *local_40;
  longlong local_30;
  
  local_40 = auStack_78;
  local_res8 = param_1;
  puVar2 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_00ac2700(local_res8,0,param_3,param_4);
  plVar3 = (longlong *)FUN_00742f60(&PTR_FUN_00a6c630,1,0);
  *(longlong **)(local_res8 + 0x1a0) = plVar3;
  local_30 = *(longlong *)(param_4 + 0x1a0);
  local_58 = *(undefined4 *)(local_30 + 0x9c);
  (**(code **)(*plVar3 + 400))
            (plVar3,*(undefined4 *)(local_30 + 0x90),*(undefined4 *)(local_30 + 0x94),
             *(undefined4 *)(local_30 + 0x98));
  lVar1 = *(longlong *)(local_res8 + 0x1a0);
  *(undefined1 *)(lVar1 + 0x4b0) = *(undefined1 *)(*(longlong *)(param_4 + 0x1a0) + 0x4b0);
  FUN_0064e030(lVar1,*(undefined4 *)(*(longlong *)(param_4 + 0x1a0) + 200));
  (**(code **)(**(longlong **)(local_res8 + 0x1a0) + 0x130))
            (*(longlong **)(local_res8 + 0x1a0),
             *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0));
  *(undefined4 *)(local_res8 + 0x194) = *(undefined4 *)(param_4 + 0x194);
  *(undefined4 *)(local_res8 + 400) = *(undefined4 *)(param_4 + 400);
  *(undefined8 *)(local_res8 + 0x1a8) = *(undefined8 *)(param_4 + 0x1a0);
  *(undefined8 *)(local_res8 + 0x1b0) = *(undefined8 *)(*(longlong *)(param_4 + 0x18) + 0xb8);
  lVar1 = *(longlong *)(param_4 + 0x18);
  *(undefined8 *)(local_res8 + 0x1b8) = *(undefined8 *)(lVar1 + 0x208);
  *(undefined8 *)(local_res8 + 0x1c0) = *(undefined8 *)(lVar1 + 0x210);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

