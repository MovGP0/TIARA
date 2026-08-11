/* Ghidra address: 006aaf70 */
/* Ghidra symbol: FUN_006aaf70 */


undefined4 FUN_006aaf70(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004113d0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 200),&PTR_FUN_0066ac78);
  if ((char)uVar1 == '\0') {
    (**(code **)(*param_1 + 0xe8))(param_1,0);
  }
  return uVar1;
}

