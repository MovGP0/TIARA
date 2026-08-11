/* Ghidra address: 00990530 */
/* Ghidra symbol: FUN_00990530 */


undefined8 FUN_00990530(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x100))(param_1);
  cVar1 = FUN_00526f10();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x100))(param_1);
    cVar1 = FUN_00526f30();
    if (cVar1 == '\0') {
      FUN_00414480(local_20);
      local_28 = (**(code **)(*param_1 + 0x100))(param_1);
      FUN_00448450(local_20,local_28,PTR_DAT_02004830);
      FUN_004168e0(param_2,local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      (**(code **)(*param_1 + 0x100))(param_1);
      cVar1 = FUN_00527050();
      if (cVar1 == '\x01') {
        FUN_00414b90(param_2,L"Infinity");
      }
      else {
        FUN_00414b90(param_2,L"-Infinity");
      }
    }
  }
  else {
    FUN_00414b90(param_2,&DAT_0099067c);
  }
  FUN_00414480(local_20);
  return param_2;
}

