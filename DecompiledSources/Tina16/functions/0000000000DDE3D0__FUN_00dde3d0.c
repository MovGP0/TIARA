/* Ghidra address: 00dde3d0 */
/* Ghidra symbol: FUN_00dde3d0 */


undefined2 FUN_00dde3d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00620998);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT11((char)(*(ushort *)(param_1 + 0x34) >> 8),
                     (*(ushort *)(param_1 + 0x34) & 0x10) != 0);
  }
  return uVar2;
}

