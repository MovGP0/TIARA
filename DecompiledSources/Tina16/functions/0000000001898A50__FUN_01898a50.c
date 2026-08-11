/* Ghidra address: 01898a50 */
/* Ghidra symbol: FUN_01898a50 */


void FUN_01898a50(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_28 [3];
  
  local_40 = auStack_68;
  local_28[0] = 0;
  puVar1 = auStack_68;
  if ((char)param_1[0xdc] == '\0') {
    FUN_0043e5a0(local_28,param_2);
    FUN_006df690(param_1[0xaa]);
    *(undefined1 *)(param_1 + 0xdc) = 1;
    local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_018988d0(auStack_68,param_1[0xdf]);
    FUN_006e5fa0(param_1,local_38);
    FUN_006df710(param_1[0xaa]);
    FUN_006e2590(param_1,0);
    *(undefined1 *)(param_1 + 0xdc) = 0;
    FUN_00414ad0(param_1 + 0xe0,param_2);
    if ((int)param_1[0xe5] < 0) {
      FUN_006e23c0(param_1);
    }
    else {
      FUN_018987b0(auStack_68,(int)param_1[0xe5]);
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,local_38);
    FUN_00410f20(local_38);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00414480(local_28);
  return;
}

