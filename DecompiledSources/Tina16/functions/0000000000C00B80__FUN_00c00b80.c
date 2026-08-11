/* Ghidra address: 00c00b80 */
/* Ghidra symbol: FUN_00c00b80 */


void FUN_00c00b80(longlong param_1,uint param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *(undefined1 *)
   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x10) + 8) + 0x10 +
   (longlong)(int)param_2 * 0x14) = 0;
  if (param_3 == '\0') {
    *(ushort *)(param_1 + 0x638) = *(ushort *)(param_1 + 0x638) | 2;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4a8) + 0x10);
    if (*(uint *)(lVar2 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    uVar1 = *(ulonglong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)param_2 * 0x14);
    FUN_00bf3990(param_1,uVar1 & 0xffffffff,0x7fffffff);
    FUN_00bf37c0(param_1,uVar1 & 0xffffffff,0x7fffffff);
    FUN_00bfd160(param_1);
  }
  return;
}

