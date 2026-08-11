/* Ghidra address: 01542520 */
/* Ghidra symbol: FUN_01542520 */


longlong * FUN_01542520(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)FUN_01d34560(&PTR_FUN_01542fc0,1,5,5);
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar3);
      uVar2 = FUN_01543190(&DAT_01542d68,1,uVar2);
      (**(code **)(*plVar1 + 0x50))(plVar1,uVar2);
      FUN_01d347d0(plVar1,(int)plVar1[2] + -1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return plVar1;
}

