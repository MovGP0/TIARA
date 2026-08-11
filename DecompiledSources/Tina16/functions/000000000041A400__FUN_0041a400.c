/* Ghidra address: 0041a400 */
/* Ghidra symbol: FUN_0041a400 */


undefined8 FUN_0041a400(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_1c [4];
  
  uVar2 = 0;
  *param_2 = 0;
  cVar1 = (*DAT_0200aee0)(0x38,local_1c,0,param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_004095c0((longlong)(*param_2 * 2));
    (*DAT_0200aee0)(0x38,local_1c,uVar2,param_2);
  }
  return uVar2;
}

