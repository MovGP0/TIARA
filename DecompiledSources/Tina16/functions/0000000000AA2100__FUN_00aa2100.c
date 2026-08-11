/* Ghidra address: 00aa2100 */
/* Ghidra symbol: FUN_00aa2100 */


void FUN_00aa2100(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((char)param_3 == '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x570) + 0x68))
                      (*(longlong **)(param_1 + 0x570),param_2,param_3);
    if (iVar1 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x568) + 0x68))
                (*(longlong **)(param_1 + 0x568),param_2,param_3);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x568) + 0x68))
                      (*(longlong **)(param_1 + 0x568),param_2,param_3);
    if (iVar1 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x570) + 0x68))
                (*(longlong **)(param_1 + 0x570),param_2,param_3);
    }
  }
  return;
}

