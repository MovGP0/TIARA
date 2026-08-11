/* Ghidra address: 00b328a0 */
/* Ghidra symbol: FUN_00b328a0 */


void FUN_00b328a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_2f;
  undefined1 local_27;
  short local_1a;
  undefined8 local_18;
  undefined4 local_c;
  
  local_18 = 0;
  FUN_00417580(&local_2f,&DAT_00b25e50);
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,4)
  ;
  local_c = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,&local_c,2);
  local_1a = (short)local_c + -1;
  local_27 = 7;
  FUN_00b2bea0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48),&local_2f);
  FUN_00414be0(&local_18,local_2f);
  FUN_00415530(*(longlong *)(param_1 + 0x38) + 10,local_18,0);
  FUN_00417740(&local_2f,&DAT_00b25e50);
  FUN_00414520(&local_18);
  return;
}

