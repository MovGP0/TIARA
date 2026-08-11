/* Ghidra address: 01d83b10 */
/* Ghidra symbol: FUN_01d83b10 */


void FUN_01d83b10(longlong param_1)

{
  undefined8 uVar1;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_01d81060(param_1,local_20);
  if ((*(char *)(param_1 + 0x7fa) != '\x05') && (local_20[0] != 0)) {
    *(longlong *)PTR_DAT_02001d00 = local_20[0];
    local_20[0] = *(longlong *)PTR_DAT_020027c0;
    FUN_017cc8f0(local_20);
    *(longlong *)PTR_DAT_020027c0 = local_20[0];
    uVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,
                         *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001d00 + 8) + 0x434),1
                         ,0);
    *(undefined8 *)PTR_DAT_02005188 = uVar1;
    FUN_01cc6020(*(undefined8 *)PTR_DAT_02005188);
    uVar1 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,
                         *(undefined1 *)(*(longlong *)(*(longlong *)PTR_DAT_02001d00 + 8) + 0x434),1
                         ,0);
    *(undefined8 *)PTR_DAT_02004fb8 = uVar1;
    FUN_01cc6020(*(undefined8 *)PTR_DAT_02004fb8);
  }
  return;
}

