/* Ghidra address: 014f4080 */
/* Ghidra symbol: FUN_014f4080 */


void FUN_014f4080(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short *local_20;
  
  local_20 = (short *)0x0;
  iVar2 = 1;
  do {
    iVar3 = 1;
    do {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6e0),&local_20,iVar2,iVar3);
      if (*local_20 != 0x2e) {
        uVar1 = FUN_01d43840(*local_20);
        FUN_01d44830(param_2,iVar2,iVar3,uVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 10);
  FUN_00414480(&local_20);
  return;
}

