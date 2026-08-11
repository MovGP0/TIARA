/* Ghidra address: 010934d0 */
/* Ghidra symbol: FUN_010934d0 */


undefined8 FUN_010934d0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,(&PTR_u_always_01f0cd30)[param_2]);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

