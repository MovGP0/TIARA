/* Ghidra address: 00a40700 */
/* Ghidra symbol: FUN_00a40700 */


void FUN_00a40700(longlong param_1,uint param_2,uint param_3,uint param_4,byte *param_5,
                 byte *param_6,byte *param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 & 0xff) +
          (*(int *)(param_1 + 0x50) +
           *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 8) * 4) + 8) / 0x10
  ;
  *(int *)(param_1 + 0x50) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x50) = 0xff;
  }
  iVar2 = (param_3 & 0xff) +
          (*(int *)(param_1 + 0x54) +
           *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 8) * 4) + 8) / 0x10
  ;
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x54) = 0xff;
  }
  iVar2 = (param_4 & 0xff) +
          (*(int *)(param_1 + 0x58) +
           *(int *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 8) * 4) + 8) / 0x10
  ;
  *(int *)(param_1 + 0x58) = iVar2;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  else if (0xff < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0xff;
  }
  FUN_00a40420(param_1,*(undefined1 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x54),
               *(undefined1 *)(param_1 + 0x58),param_5,param_6,param_7);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - (uint)*param_5;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar1 = iVar2 * 2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  **(int **)(param_1 + 0x38) = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - (uint)*param_6;
  iVar2 = *(int *)(param_1 + 0x54);
  iVar1 = iVar2 * 2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  **(int **)(param_1 + 0x40) = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - (uint)*param_7;
  iVar2 = *(int *)(param_1 + 0x58);
  iVar1 = iVar2 * 2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  **(int **)(param_1 + 0x48) = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 100) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 4;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 4;
  }
  else {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -4;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + -4;
  }
  return;
}

