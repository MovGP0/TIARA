/* Ghidra address: 01563800 */
/* Ghidra symbol: FUN_01563800 */


bool FUN_01563800(longlong param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x9c8) != 0) {
    cVar1 = FUN_00e14e00(*(longlong *)(param_1 + 0x9c8),param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_00e14cc0(*(undefined8 *)(param_1 + 0x9c8),param_2,2,local_38,local_2c,0);
      bVar2 = cVar1 == '\0';
    }
  }
  return bVar2;
}

