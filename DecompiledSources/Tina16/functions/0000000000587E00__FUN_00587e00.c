/* Ghidra address: 00587e00 */
/* Ghidra symbol: FUN_00587e00 */


undefined8 FUN_00587e00(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_418 [1032];
  
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    iVar2 = FUN_0041d770(local_418,0x200,(char *)*param_1 + 1,cVar1);
    FUN_00414740(param_2,local_418,iVar2 + -1);
  }
  return param_2;
}

