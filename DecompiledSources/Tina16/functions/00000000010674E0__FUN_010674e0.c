/* Ghidra address: 010674e0 */
/* Ghidra symbol: FUN_010674e0 */


undefined8 FUN_010674e0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,(&PTR_u___asm_01f09ab8)[param_2]);
  if (cVar1 == '\0') {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

