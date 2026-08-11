/* Ghidra address: 00c2e190 */
/* Ghidra symbol: FUN_00c2e190 */


longlong FUN_00c2e190(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00c2de60(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x18) = 4;
  *(undefined1 *)(local_res8 + 0x19) = 0;
  *(undefined2 *)(local_res8 + 0x1a) = 0;
  *(undefined1 *)(local_res8 + 0x1c) = 0;
  *(undefined1 *)(local_res8 + 0x1d) = 0;
  lVar1 = *(longlong *)(local_res8 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x60) == 0) {
      *(longlong *)(lVar1 + 0x60) = local_res8;
    }
    else {
      FUN_0041ddd0(&local_28,PTR_PTR_02003588);
      FUN_00c1a780(local_res8,1,local_28);
    }
  }
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

