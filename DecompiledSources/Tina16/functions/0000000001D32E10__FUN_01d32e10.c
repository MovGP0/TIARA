/* Ghidra address: 01d32e10 */
/* Ghidra symbol: FUN_01d32e10 */


undefined8 FUN_01d32e10(longlong *param_1,undefined2 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined2 local_32 [13];
  
  uVar3 = 0;
  local_32[0] = param_2;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_32,&local_38);
  if (cVar1 != '\0') {
    lVar2 = FUN_00b94e60(param_1,local_38);
    uVar3 = *(undefined8 *)(lVar2 + 0x12);
  }
  return uVar3;
}

