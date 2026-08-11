/* Ghidra address: 00af4710 */
/* Ghidra symbol: FUN_00af4710 */


char FUN_00af4710(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 *param_4)

{
  char local_21;
  undefined8 local_20;
  
  local_20 = *param_4;
  local_21 = FUN_0064eee0(param_1,param_2,param_3,&local_20);
  if ((local_21 == '\0') && ((*(ushort *)(param_1 + 0x79a) & 0x80) == 0)) {
    FUN_00af4640(param_1,param_1,param_2,param_3,&local_20,&local_21);
  }
  return local_21;
}

