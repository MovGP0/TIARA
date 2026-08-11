/* Ghidra address: 017afe30 */
/* Ghidra symbol: FUN_017afe30 */


bool FUN_017afe30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  (**(code **)(*param_1 + 0x40))(param_1,local_58);
  thunk_FUN_041ebb10(local_48,local_58,&local_38);
  iVar1 = FUN_00429b10(local_48);
  return iVar1 == 0;
}

