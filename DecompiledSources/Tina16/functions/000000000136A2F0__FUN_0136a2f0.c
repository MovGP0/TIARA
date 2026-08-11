/* Ghidra address: 0136a2f0 */
/* Ghidra symbol: FUN_0136a2f0 */


void FUN_0136a2f0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == 0x100) {
    if ((*(longlong *)(param_2 + 2) == 0x11) && ((char)param_1[3] == '\0')) {
      *(undefined1 *)(param_1 + 3) = 1;
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x38))(param_1,uVar1);
    }
  }
  else if (((*param_2 == 0x101) && (*(longlong *)(param_2 + 2) == 0x11)) &&
          ((char)param_1[3] == '\x01')) {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x38))(param_1,uVar1);
  }
  return;
}

