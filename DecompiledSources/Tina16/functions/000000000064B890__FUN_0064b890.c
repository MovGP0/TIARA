/* Ghidra address: 0064b890 */
/* Ghidra symbol: FUN_0064b890 */


void FUN_0064b890(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (cVar1 != '\0') {
    FUN_0064de00(param_1[4],param_2);
  }
  return;
}

