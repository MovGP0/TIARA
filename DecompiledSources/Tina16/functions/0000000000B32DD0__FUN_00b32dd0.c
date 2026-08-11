/* Ghidra address: 00b32dd0 */
/* Ghidra symbol: FUN_00b32dd0 */


void FUN_00b32dd0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_004144d0(&local_20);
  bVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) + -1 + (longlong)iVar1);
  if ((bVar2 != 0) &&
     (bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) + -1 +
                       (longlong)(*(int *)(param_1 + 0x34) + 2)) & 1, bVar3 == 1)) {
    bVar2 = bVar2 * '\x02';
  }
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),iVar1,bVar2 + 2);
  if (bVar2 != 0) {
    FUN_00415ad0(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 2),3,bVar2);
    if (bVar3 == 1) {
      FUN_00b152b0(local_30,local_20);
      FUN_00414c70(&local_20,local_30[0]);
    }
  }
  FUN_00415980(*(longlong *)(param_1 + 0x38) + 10,3,&LAB_00b32f44,local_20,&LAB_00b32f44);
  FUN_004144d0(local_30);
  FUN_004144d0(&local_20);
  return;
}

