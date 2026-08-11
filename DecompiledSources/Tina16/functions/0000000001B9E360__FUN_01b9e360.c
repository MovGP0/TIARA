/* Ghidra address: 01b9e360 */
/* Ghidra symbol: FUN_01b9e360 */


ulonglong FUN_01b9e360(longlong param_1,int param_2,undefined8 *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = 0;
  bVar1 = false;
  iVar4 = 0;
  do {
    lVar2 = FUN_01d347d0(param_1,iVar4);
    if (*(int *)(lVar2 + 8) == param_2) {
      *param_3 = *(undefined8 *)(lVar2 + 8);
      param_3[1] = *(undefined8 *)(lVar2 + 0x10);
      param_3[2] = *(undefined8 *)(lVar2 + 0x18);
      uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x20) >> 8),1);
    }
    iVar4 = iVar4 + 1;
    if (*(int *)(param_1 + 0x10) <= iVar4) {
      bVar1 = true;
    }
  } while ((char)uVar3 == '\0' && !bVar1);
  if ((char)uVar3 == '\0') {
    *(undefined4 *)param_3 = 0;
  }
  return uVar3 & 0xffffffff;
}

