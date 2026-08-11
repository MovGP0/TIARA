/* Ghidra address: 017b5e80 */
/* Ghidra symbol: FUN_017b5e80 */


longlong FUN_017b5e80(longlong param_1,char param_2,undefined1 param_3,undefined8 *param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_017b58f0(local_res8,0);
  local_20 = (undefined1 *)(local_res8 + 0x50);
  *local_20 = param_3;
  uVar2 = FUN_00b95b20(*(undefined4 *)param_4,*(undefined4 *)((longlong)param_4 + 4),
                       *(undefined4 *)(param_4 + 1),*(undefined4 *)((longlong)param_4 + 0xc));
  *(undefined8 *)(local_20 + 1) = uVar2;
  *(undefined4 *)(local_20 + 9) = param_5;
  local_20[0xd] = 0;
  *(undefined2 *)(local_20 + 0xe) = 100;
  *(undefined4 *)(local_20 + 0x10) = 0xfffffffe;
  local_20[0x14] = 3;
  *(undefined2 *)(local_20 + 0x15) = 100;
  *(undefined4 *)(local_20 + 0x17) = 0xfffffffe;
  *(undefined8 *)(local_res8 + 0x18) = *param_4;
  *(undefined8 *)(local_res8 + 0x48) = param_4[1];
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

