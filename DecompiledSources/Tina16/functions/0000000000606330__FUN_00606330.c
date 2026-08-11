/* Ghidra address: 00606330 */
/* Ghidra symbol: FUN_00606330 */


char FUN_00606330(undefined8 param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_27 [5];
  short local_13;
  char local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = FUN_004b6da0(param_2);
  local_11 = FUN_00606d10(param_1,param_2);
  if (local_11 == '\0') {
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_27,0x16);
    if (((iVar2 == 0x16) && (local_27[0] == -0x65393229)) &&
       (sVar1 = FUN_00601640(local_27), sVar1 == local_13)) {
      local_11 = '\x01';
    }
    else {
      local_11 = '\0';
    }
  }
  FUN_004b6dc0(param_2,local_10);
  return local_11;
}

