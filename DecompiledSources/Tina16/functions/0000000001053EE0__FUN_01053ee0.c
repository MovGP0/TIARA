/* Ghidra address: 01053ee0 */
/* Ghidra symbol: FUN_01053ee0 */


undefined8 FUN_01053ee0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_01050af0(param_1,0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x958) + 0x298))(*(longlong **)(param_1 + 0x958));
    FUN_01050900(param_1);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),0);
  }
  FUN_01053ec0(param_1,cVar1 == '\0');
  return 1;
}

