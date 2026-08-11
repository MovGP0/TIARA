/* Ghidra address: 01536320 */
/* Ghidra symbol: FUN_01536320 */


longlong FUN_01536320(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  iVar5 = *(int *)(param_1 + 0x2d8);
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8);
      sVar2 = (**(code **)(**(longlong **)(lVar1 + 0x128) + 0xf8))(*(longlong **)(lVar1 + 0x128));
      if (sVar2 == 100) {
        uVar3 = FUN_01b05ad0(lVar1,3,0,&local_2a,&local_2b,&local_29);
        *param_2 = uVar3;
        return lVar1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

