/* Ghidra address: 007222e0 */
/* Ghidra symbol: FUN_007222e0 */


void FUN_007222e0(longlong param_1,int *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  FUN_00656570(param_1,param_2);
  if (((*(longlong *)(param_2 + 6) == 0) && (*param_2 != 0xb021)) &&
     (*(longlong *)(param_1 + 0x490) != 0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x98))
                      (*(longlong **)(param_1 + 0x490),param_2);
    *(ulonglong *)(param_2 + 6) = uVar1 & 0xff;
  }
  if (((*(longlong *)(param_2 + 6) == 0) && (*param_2 == 7)) &&
     (*(longlong *)(param_1 + 0x498) != 0)) {
    uVar2 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x498),7,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  return;
}

