/* Ghidra address: 014b0a60 */
/* Ghidra symbol: FUN_014b0a60 */


undefined8 FUN_014b0a60(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xb8))(param_1,(&PTR_DAT_01f520c8)[param_2]);
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

