/* Ghidra address: 016281b0 */
/* Ghidra symbol: FUN_016281b0 */


longlong * FUN_016281b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 auStack_178 [40];
  undefined1 local_150 [256];
  undefined1 *local_50;
  uint local_34;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_50 = auStack_178;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)0x0;
  if (*(char *)(*(longlong *)(local_res18 + 0x13980) + 0x570) == '\0') {
    FUN_00416910(local_150,local_res8,0xff);
    local_30 = (longlong *)
               FUN_0161e030(0,local_150,
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(local_res18 + 0x13a30) + 0x200) + 0x10),
                            *(undefined1 *)(local_res18 + 0x13a2c));
    if (local_30 != (longlong *)0x0) {
      uVar1 = (**(code **)(*local_30 + 0xf8))(local_30);
      local_34 = (uint)uVar1;
      (**(code **)(*local_20 + 0x10))(local_20,local_res10);
      FUN_01625a50(local_34,local_20);
      FUN_016272a0(local_30,local_20,local_res18);
      FUN_0163e150(local_res18,local_30,0);
      *(int *)(local_res18 + 0x74) = *(int *)(local_res18 + 0x74) + 1;
    }
  }
  local_28 = local_30;
  FUN_00410f20(local_20);
  FUN_00414480(&local_res8);
  return local_28;
}

