/* Ghidra address: 010f7ea0 */
/* Ghidra symbol: FUN_010f7ea0 */


void FUN_010f7ea0(longlong *param_1)

{
  undefined8 uVar1;
  longlong local_20;
  
  local_20 = 0;
  (**(code **)(*param_1 + 0x560))(param_1,&local_20);
  if ((*(char *)((longlong)param_1 + 0x7fa) != '\x05') && (local_20 != 0)) {
    *(longlong *)PTR_DAT_02001d00 = local_20;
    local_20 = (**(code **)(*param_1 + 0x458))(param_1);
    FUN_017cc8f0(&local_20);
    (**(code **)(*param_1 + 0x468))(param_1,local_20);
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

