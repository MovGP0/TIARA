/* Ghidra address: 015962e0 */
/* Ghidra symbol: FUN_015962e0 */


void FUN_015962e0(longlong param_1,int param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar3;
  undefined2 local_res10;
  undefined2 local_802c;
  int local_801c;
  int local_800c;
  undefined1 auStack_8008 [28672];
  undefined1 auStack_1008 [4096];
  ulonglong uVar2;
  
  uVar2 = 0xf90;
  do {
    uVar1 = uVar2 - 0x1000;
    auStack_1008[uVar2] = (char)uVar1;
    uVar2 = uVar1;
  } while (0xffffffffffff7f90 < uVar1);
  uVar3 = FUN_004095c0((longlong)param_2);
  *param_3 = uVar3;
  local_801c = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_801c = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  local_800c = 1;
  if (0 < local_801c) {
    do {
      auStack_8008[local_800c] =
           *(undefined1 *)(*(longlong *)(param_1 + 0x20) + -1 + (longlong)local_800c);
      local_800c = local_800c + 1;
      local_801c = local_801c + -1;
    } while (local_801c != 0);
  }
  local_802c = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_802c = (undefined2)*(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4);
  }
  local_res10 = (undefined2)param_2;
  FUN_01595ab0(auStack_8008 + 1,local_802c,*(undefined8 *)(param_1 + 0x10),
               *(undefined2 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),*param_3,local_res10);
  return;
}

