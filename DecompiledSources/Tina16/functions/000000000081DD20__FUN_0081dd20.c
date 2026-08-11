/* Ghidra address: 0081dd20 */
/* Ghidra symbol: FUN_0081dd20 */


void FUN_0081dd20(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  iVar1 = param_2[2];
  if ((((((iVar1 != 0xc) && (iVar1 != 0xf)) && (iVar1 != 10)) && ((iVar1 != 0xb && (iVar1 != 2))))
      && ((iVar1 != 0xd && ((iVar1 != 0xe && (iVar1 != 0x11)))))) && (iVar1 != 0x10)) {
    *(undefined8 *)(param_2 + 6) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

