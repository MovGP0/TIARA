/* Ghidra address: 00742de0 */
/* Ghidra symbol: FUN_00742de0 */


void FUN_00742de0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  thunk_FUN_040dee27(*(undefined8 *)(param_1 + 0x80),1);
  if (((*(int *)(param_1 + 0x78) != 0) && (*(char *)(param_1 + 0x98) != '\0')) &&
     (*(longlong *)(param_1 + 0x88) != 0)) {
    lVar1 = thunk_FUN_04176ccd(*(undefined8 *)(param_1 + 0x80),1,*(int *)(param_1 + 0x78),0);
    if (lVar1 == 0) {
      FUN_0041ddd0(&local_10,PTR_PTR_02005948);
      uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_10);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414480(&local_10);
  return;
}

