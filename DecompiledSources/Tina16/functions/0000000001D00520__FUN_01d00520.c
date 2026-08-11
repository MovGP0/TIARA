/* Ghidra address: 01d00520 */
/* Ghidra symbol: FUN_01d00520 */


void FUN_01d00520(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168) +
             (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xfc) * 99 + 0x5b);
  iVar2 = FUN_01d01910(*(undefined8 *)(param_1 + 0x2f0));
  (**(code **)(*plVar1 + 0x208))(plVar1,1,*(int *)(*(longlong *)(param_1 + 0x2f0) + 0xe8) + iVar2,0)
  ;
  return;
}

