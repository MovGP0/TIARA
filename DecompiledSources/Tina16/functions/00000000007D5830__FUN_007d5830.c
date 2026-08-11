/* Ghidra address: 007d5830 */
/* Ghidra symbol: FUN_007d5830 */


void FUN_007d5830(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = thunk_FUN_03b46bc6(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x90),
                             *(uint *)(&DAT_01e12578 + (ulonglong)*(byte *)(param_1 + 0xe0) * 4) |
                             *(uint *)(&DAT_01e1259c + (ulonglong)*(byte *)(param_1 + 0xa9) * 4),
                             *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020041b8);
    uVar1 = FUN_0044d490(&PTR_FUN_00472870,1,local_10);
    FUN_004134c0(uVar1);
  }
  if (*(int *)(param_1 + 0xac) != 0x1fffffff) {
    FUN_007d6470(param_1,*(int *)(param_1 + 0xac));
  }
  FUN_00414480(&local_10);
  return;
}

