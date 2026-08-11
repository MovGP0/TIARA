/* Ghidra address: 00c1e4f0 */
/* Ghidra symbol: FUN_00c1e4f0 */


void FUN_00c1e4f0(longlong param_1,uint param_2,uint param_3,uint param_4,byte *param_5,
                 byte *param_6,byte *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)(param_1 + 0x848) + **(int **)(param_1 + 0x830) + 8) / 0x10;
  *(int *)(param_1 + 0x848) = iVar2;
  iVar2 = (param_2 & 0xff) + *(int *)(param_1 + 0x418 + (longlong)iVar2 * 4);
  *(int *)(param_1 + 0x848) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x848) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x848) = 0xff;
  }
  iVar2 = (*(int *)(param_1 + 0x84c) + **(int **)(param_1 + 0x838) + 8) / 0x10;
  *(int *)(param_1 + 0x84c) = iVar2;
  iVar2 = (param_3 & 0xff) + *(int *)(param_1 + 0x418 + (longlong)iVar2 * 4);
  *(int *)(param_1 + 0x84c) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x84c) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x84c) = 0xff;
  }
  iVar2 = (*(int *)(param_1 + 0x850) + **(int **)(param_1 + 0x840) + 8) / 0x10;
  *(int *)(param_1 + 0x850) = iVar2;
  iVar2 = (param_4 & 0xff) + *(int *)(param_1 + 0x418 + (longlong)iVar2 * 4);
  *(int *)(param_1 + 0x850) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x850) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x850) = 0xff;
  }
  FUN_00c1e220(param_1,*(undefined1 *)(param_1 + 0x848),*(undefined1 *)(param_1 + 0x84c),
               *(undefined1 *)(param_1 + 0x850),param_5,param_6,param_7);
  *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) - (uint)*param_5;
  iVar2 = *(int *)(param_1 + 0x848);
  if (iVar2 != 0) {
    iVar1 = iVar2 * 2;
    *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + iVar1;
    **(int **)(param_1 + 0x830) = *(int *)(param_1 + 0x860) + *(int *)(param_1 + 0x848);
    *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + iVar1;
    *(int *)(param_1 + 0x860) = *(int *)(param_1 + 0x854) + *(int *)(param_1 + 0x848);
    *(int *)(param_1 + 0x854) = iVar2;
    *(int *)(param_1 + 0x848) = *(int *)(param_1 + 0x848) + iVar1;
  }
  *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) - (uint)*param_6;
  iVar2 = *(int *)(param_1 + 0x84c);
  if (iVar2 != 0) {
    iVar1 = iVar2 * 2;
    *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) + iVar1;
    **(int **)(param_1 + 0x838) = *(int *)(param_1 + 0x864) + *(int *)(param_1 + 0x84c);
    *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) + iVar1;
    *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x858) + *(int *)(param_1 + 0x84c);
    *(int *)(param_1 + 0x858) = iVar2;
    *(int *)(param_1 + 0x84c) = *(int *)(param_1 + 0x84c) + iVar1;
  }
  *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) - (uint)*param_7;
  iVar2 = *(int *)(param_1 + 0x850);
  if (iVar2 != 0) {
    iVar1 = iVar2 * 2;
    *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + iVar1;
    **(int **)(param_1 + 0x840) = *(int *)(param_1 + 0x868) + *(int *)(param_1 + 0x850);
    *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + iVar1;
    *(int *)(param_1 + 0x868) = *(int *)(param_1 + 0x85c) + *(int *)(param_1 + 0x850);
    *(int *)(param_1 + 0x85c) = iVar2;
    *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + iVar1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x830) = *(longlong *)(param_1 + 0x830) + 4;
    *(longlong *)(param_1 + 0x838) = *(longlong *)(param_1 + 0x838) + 4;
    *(longlong *)(param_1 + 0x840) = *(longlong *)(param_1 + 0x840) + 4;
  }
  else {
    *(longlong *)(param_1 + 0x830) = *(longlong *)(param_1 + 0x830) + -4;
    *(longlong *)(param_1 + 0x838) = *(longlong *)(param_1 + 0x838) + -4;
    *(longlong *)(param_1 + 0x840) = *(longlong *)(param_1 + 0x840) + -4;
  }
  return;
}

