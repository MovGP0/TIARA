/* Ghidra address: 00c8ec70 */
/* Ghidra symbol: FUN_00c8ec70 */


void FUN_00c8ec70(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((char)param_1[5] != '\0') {
    FUN_00c8fb90(param_1,1);
  }
  uVar1 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0xa0))
                    (*(longlong **)PTR_DAT_020050b0,param_2,param_3,
                     *(undefined1 *)((longlong)param_1 + 0x55),
                     *(undefined1 *)((longlong)param_1 + 0x54));
  FUN_00c8fd40(param_1,uVar1);
  return;
}

