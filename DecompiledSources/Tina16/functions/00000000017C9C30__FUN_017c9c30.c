/* Ghidra address: 017c9c30 */
/* Ghidra symbol: FUN_017c9c30 */


char FUN_017c9c30(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_01995600(param_1,0,0);
  if (cVar1 == '\0') {
    FUN_01d426b0(2000,&LAB_017c9cc4);
  }
  cVar1 = '\0';
  plVar3 = (longlong *)FUN_01995660(param_1,0,0);
  while ((plVar3 != (longlong *)0x0 && (cVar1 == '\0'))) {
    uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar2 < 1000) || (0x7fffffff < uVar2)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    FUN_01995800(param_1,0,0);
    plVar3 = (longlong *)FUN_01995660(param_1);
  }
  return cVar1;
}

