/* Ghidra address: 00de0ee0 */
/* Ghidra symbol: FUN_00de0ee0 */


void FUN_00de0ee0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_0065a280(param_1,param_2);
  if (((*(uint *)(param_1[0x92] + 0x38) & 8) != 0) && (*(char *)((longlong)param_1 + 0x50b) == '\0')
     ) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x50b) = 1;
      uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
      FUN_00ddffa0(param_1,0xfffffdfe,
                   CONCAT62((int6)((ulonglong)uVar2 >> 0x10),-(ushort)((char)uVar2 != '\0')) &
                   0xffffffff);
      *(undefined1 *)((longlong)param_1 + 0x50b) = 0;
    }
  }
  return;
}

