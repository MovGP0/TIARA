/* Ghidra address: 005d27e0 */
/* Ghidra symbol: FUN_005d27e0 */


int FUN_005d27e0(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005d2be0();
  *param_2 = cVar1;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    iVar2 = 1;
  }
  else if (cVar1 == '\x01') {
    iVar2 = 0;
    if (PTR_u______01de8348 != (undefined *)0x0) {
      iVar2 = *(int *)(PTR_u______01de8348 + -4);
    }
    iVar2 = iVar2 + 1;
  }
  else if (cVar1 == '\x02') {
    iVar2 = 0;
    if (PTR_u_____UNC__01de8350 != (undefined *)0x0) {
      iVar2 = *(int *)(PTR_u_____UNC__01de8350 + -4);
    }
    iVar2 = iVar2 + 1;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

