/* Ghidra address: 0064e230 */
/* Ghidra symbol: FUN_0064e230 */


void FUN_0064e230(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar2 = FUN_004aeba0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x370),param_1);
    if (-1 < iVar2) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x370);
      iVar1 = *(int *)(lVar3 + 0x10);
      if (param_2 < 0) {
        param_2 = 0;
      }
      if (iVar1 <= param_2) {
        param_2 = iVar1 + -1;
      }
      if (param_2 != iVar2) {
        FUN_004ae870(lVar3,iVar2);
        FUN_004aec30(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x370),param_2,param_1);
        FUN_0064e4c0(param_1,*(undefined1 *)(param_1 + 0xa9),1);
        if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
          lVar3 = FUN_007f9b90(param_1,1);
          if ((*(uint *)(lVar3 + 0xa4) & 4) != 0) {
            pcVar4 = (code *)FUN_00411550(lVar3,0xffcf);
            (*pcVar4)(lVar3,1);
          }
        }
      }
    }
  }
  return;
}

