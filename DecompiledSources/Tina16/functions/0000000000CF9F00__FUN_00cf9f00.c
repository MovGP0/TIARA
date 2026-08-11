/* Ghidra address: 00cf9f00 */
/* Ghidra symbol: FUN_00cf9f00 */


void FUN_00cf9f00(longlong param_1,int param_2,undefined8 param_3,int *param_4,uint param_5)

{
  undefined8 in_RAX;
  undefined7 uVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 < 0;
  uVar1 = (undefined7)((ulonglong)in_RAX >> 8);
  if ((bVar3) && (param_5 < 0x80000000)) {
    iVar2 = param_5 + 1;
    do {
      if (param_2 == *param_4) {
        uVar1 = 0;
        bVar3 = false;
        break;
      }
      param_4 = param_4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (bVar3) {
    param_1 = FUN_00cf8ce0(&PTR_FUN_00cf5f58,CONCAT71(uVar1,1) & 0xffffffff,param_2,param_3);
    FUN_004134c0();
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

