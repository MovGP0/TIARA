/* Ghidra address: 00d49ac0 */
/* Ghidra symbol: FUN_00d49ac0 */


longlong FUN_00d49ac0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  bool bVar3;
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
  FUN_00788130(local_res8,0,param_3);
  uVar2 = FUN_00787d50(*(undefined8 *)(local_res8 + 0x18));
  if ((uVar2 & 4) == 0) {
    *(undefined1 *)(local_res8 + 100) = 0;
  }
  else {
    *(undefined1 *)(local_res8 + 100) = 1;
  }
  FUN_00788d30(local_res8,1);
  *(undefined4 *)(local_res8 + 0x60) = 0;
  uVar2 = FUN_00787d50(*(undefined8 *)(local_res8 + 0x18));
  bVar3 = (uVar2 & 8) != 0;
  *(bool *)(local_res8 + 0x65) = bVar3;
  if (bVar3) {
    thunk_FUN_04176ccd(*(undefined8 *)(local_res8 + 8),10,100,0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

