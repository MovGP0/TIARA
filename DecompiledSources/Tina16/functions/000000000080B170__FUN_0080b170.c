/* Ghidra address: 0080b170 */
/* Ghidra symbol: FUN_0080b170 */


undefined8 FUN_0080b170(longlong param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = *param_2 == DAT_0201268c;
  bVar3 = *param_2 == 0x1a;
  if (bVar2 || bVar3) {
    if ((*(char *)(param_1 + 0xd1) != '\0') &&
       ((bVar2 || ((bVar3 && (cVar1 = FUN_0080b390(param_1,param_2), cVar1 != '\0')))))) {
      thunk_FUN_03bddb86(0x400);
      FUN_0044ff90();
    }
    if ((*(char *)(param_1 + 0xd2) != '\0') &&
       ((bVar2 || ((bVar3 && (cVar1 = FUN_0080b300(param_1,param_2), cVar1 != '\0')))))) {
      FUN_00808a90(DAT_02012670);
    }
    if ((bVar2) && (FUN_00809600(DAT_02012670), *(char *)(param_1 + 0x193) != '\0')) {
      FUN_007f9310(*(undefined8 *)(param_1 + 0x2d0),1,1);
      FUN_007f9310(*(undefined8 *)(param_1 + 0x2d0),0,1);
    }
    return 0;
  }
  return 0;
}

