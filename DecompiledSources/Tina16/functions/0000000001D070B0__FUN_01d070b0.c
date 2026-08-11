/* Ghidra address: 01d070b0 */
/* Ghidra symbol: FUN_01d070b0 */


undefined8 FUN_01d070b0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  uVar1 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x3f0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3f0),iVar2);
      if (*(int *)(local_30 + 4) == param_2) {
        uVar1 = 1;
        FUN_01d07030(auStack_58,0xffffffff);
      }
      else if (*(int *)(local_30 + 8) == param_2) {
        uVar1 = 1;
        FUN_01d07030(auStack_58,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

