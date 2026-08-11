/* Ghidra address: 0065aec0 */
/* Ghidra symbol: FUN_0065aec0 */


void FUN_0065aec0(longlong param_1,int param_2,int param_3,char param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  *(short *)(param_1 + 0x318) = *(short *)(param_1 + 0x318) + 1;
  puVar1 = auStack_48;
  local_10 = param_1;
  if (param_4 == '\0') {
    FUN_0065ad90(param_1,param_2,param_3);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  if (((param_2 != param_3) && ((*(ushort *)(param_1 + 0x34) & 2) != 0)) &&
     ((*(byte *)(param_1 + 0xfc) & 0x20) != 0)) {
    uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x47c),param_2,param_3);
    *(undefined4 *)(param_1 + 0x47c) = uVar2;
    uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(param_1 + 0x480),param_2,param_3);
    *(undefined4 *)(param_1 + 0x480) = uVar2;
  }
  FUN_0064d660(param_1,param_2,param_3,param_4);
  FUN_0065ae10(param_1,param_2,param_3);
  FUN_00654410(param_1);
  return;
}

