/* Ghidra address: 010b2a40 */
/* Ghidra symbol: FUN_010b2a40 */


longlong FUN_010b2a40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar2 + 0xd8))(plVar2,local_res10);
  lVar3 = FUN_010ae9e0(&DAT_010a8e80,1);
  (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x10))(*(longlong **)(lVar3 + 0x20),plVar2);
  FUN_00441920(local_30,local_res10);
  FUN_00414ad0(lVar3 + 0x30,local_30[0]);
  FUN_00414ad0(lVar3 + 0x38,local_res18);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar3);
  FUN_00410f20(plVar2);
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_00441a10(&local_40,*(undefined8 *)(lVar3 + 0x30));
  FUN_0043e1a0(&local_38,local_40);
  iVar1 = FUN_00416db0(local_38,L".ino");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) | 2;
  }
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_res10,2);
  return lVar3;
}

