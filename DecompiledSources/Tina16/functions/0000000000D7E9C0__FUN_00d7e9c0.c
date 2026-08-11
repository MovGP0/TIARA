/* Ghidra address: 00d7e9c0 */
/* Ghidra symbol: FUN_00d7e9c0 */


undefined4 FUN_00d7e9c0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  local_1c = 0x1fffffff;
  cVar1 = FUN_004a3290(param_2,&local_10,&DAT_01ecf208,0x16);
  if (cVar1 != '\0') {
    iVar2 = 0;
    piVar3 = &DAT_01ecf208;
    do {
      if (*piVar3 == param_2) {
        local_1c = *(undefined4 *)(param_1 + 8 + (longlong)iVar2 * 4);
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 4;
    } while (iVar2 != 0x17);
  }
  FUN_00414480(&local_10);
  return local_1c;
}

