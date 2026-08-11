/* Ghidra address: 0188b5c0 */
/* Ghidra symbol: FUN_0188b5c0 */


longlong FUN_0188b5c0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00414ad0(local_res8 + 0x60,param_3);
  FUN_00414ad0(local_res8 + 0xb0,param_4);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x10) = plVar2;
  uVar3 = FUN_0180bfb0();
  FUN_01809b60(uVar3,&local_28,L"prDefault");
  (**(code **)(*plVar2 + 0x80))(plVar2,local_28,7);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x70) = plVar2;
  uVar3 = FUN_0180bfb0();
  FUN_01809b60(uVar3,&local_30,L"prCustom");
  (**(code **)(*plVar2 + 0x80))(plVar2,local_30,0x100);
  lVar4 = FUN_005fe0d0(&PTR_FUN_0188b258,1);
  *(longlong *)(local_res8 + 0x18) = lVar4;
  *(longlong *)(lVar4 + 0x98) = local_res8;
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

