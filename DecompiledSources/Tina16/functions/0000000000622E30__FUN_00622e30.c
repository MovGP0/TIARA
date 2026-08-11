/* Ghidra address: 00622e30 */
/* Ghidra symbol: FUN_00622e30 */


undefined8 FUN_00622e30(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0x80040112;
  }
  else {
    FUN_00414b90(param_3,param_1[0xb]);
    uVar2 = 0;
  }
  return uVar2;
}

