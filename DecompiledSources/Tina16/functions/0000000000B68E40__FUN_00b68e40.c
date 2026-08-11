/* Ghidra address: 00b68e40 */
/* Ghidra symbol: FUN_00b68e40 */


longlong FUN_00b68e40(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  uVar3 = FUN_00b59e20(&DAT_00b4ca60,1,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  *(undefined1 *)(local_res8 + 0x26) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 1;
  *(undefined1 *)(local_res8 + 0x21) = 1;
  *(undefined1 *)(local_res8 + 0x22) = 1;
  *(undefined1 *)(local_res8 + 0x23) = 1;
  *(undefined1 *)(local_res8 + 0x24) = 0;
  *(undefined1 *)(local_res8 + 0x25) = 1;
  uVar2 = thunk_FUN_041a78f9();
  FUN_00b68fb0(local_res8,uVar2);
  FUN_00b68fc0(local_res8,PTR_DAT_02004830[0xe]);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

