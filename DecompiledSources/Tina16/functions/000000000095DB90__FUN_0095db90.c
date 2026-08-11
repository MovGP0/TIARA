/* Ghidra address: 0095db90 */
/* Ghidra symbol: FUN_0095db90 */


undefined8 FUN_0095db90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x29);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
  }
  else if (cVar1 == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  else if (cVar1 == '\x02') {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

