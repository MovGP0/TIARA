/* Ghidra address: 00a3ae60 */
/* Ghidra symbol: FUN_00a3ae60 */


undefined1 FUN_00a3ae60(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_19 [8];
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = FUN_004b6da0(param_2);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_19,8);
  if (iVar2 == 8) {
    cVar1 = FUN_0043e2c0(local_19,&DAT_01e71808,8);
    if (cVar1 != '\0') {
      local_11 = 1;
      goto LAB_00a3aebf;
    }
  }
  local_11 = 0;
LAB_00a3aebf:
  FUN_004b6dc0(param_2,local_10);
  return local_11;
}

