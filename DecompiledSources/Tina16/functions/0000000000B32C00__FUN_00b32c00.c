/* Ghidra address: 00b32c00 */
/* Ghidra symbol: FUN_00b32c00 */


void FUN_00b32c00(longlong param_1)

{
  undefined8 uVar1;
  char local_19 [9];
  
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,1)
  ;
  local_19[0] = '\0';
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,local_19,1);
  if (local_19[0] == '\x01') {
    FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b32c9c);
  }
  else {
    FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,"FALSE");
  }
  return;
}

