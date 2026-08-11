/* Ghidra address: 004ba470 */
/* Ghidra symbol: FUN_004ba470 */


longlong FUN_004ba470(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x30) = param_4;
  if (param_5 != '\0') {
    cVar2 = FUN_0045aee0(param_4);
    if (cVar2 == '\0') {
      uVar3 = 1;
      goto LAB_004ba4db;
    }
  }
  uVar3 = 0;
LAB_004ba4db:
  *(undefined1 *)(local_res8 + 0x38) = uVar3;
  FUN_00459ca0(*(undefined8 *)(local_res8 + 0x30),&local_28,param_3);
  FUN_004ba230(local_res8,0,local_28);
  FUN_00419430(&local_28,&DAT_00406578);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

