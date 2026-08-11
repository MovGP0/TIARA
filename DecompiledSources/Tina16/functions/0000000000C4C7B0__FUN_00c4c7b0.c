/* Ghidra address: 00c4c7b0 */
/* Ghidra symbol: FUN_00c4c7b0 */


undefined4 FUN_00c4c7b0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_00c4c8c0(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x88))(param_1,L"Program communication is not connected");
  }
  else {
    uVar2 = FUN_00c492b0((&DAT_02019c90)[(int)param_1[0x10]],param_2);
  }
  return uVar2;
}

