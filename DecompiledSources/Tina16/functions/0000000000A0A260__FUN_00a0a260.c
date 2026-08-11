/* Ghidra address: 00a0a260 */
/* Ghidra symbol: FUN_00a0a260 */


void FUN_00a0a260(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_0040d200(param_2,0x360,0);
  ppuVar3 = &PTR_FUN_01e6e6c0;
  puVar4 = param_2;
  for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x1d] = param_2;
  FUN_00a0bea0(param_2 + 0x1d,0x3e,0x278);
  param_2[0x15] = FUN_00a0a0c0;
  param_2[0x18] = param_1;
  param_2[0x1f] = param_2 + 0x15;
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),0);
  FUN_00a0ddb0(param_2 + 0x1d,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10));
  FUN_00a0bfc0(param_2 + 0x1d,0xffffffff);
  *(undefined4 *)((longlong)param_2 + 300) = 1;
  *(int *)(param_2 + 0x26) = 1 << (*(byte *)(param_1 + 0x78) & 0x1f);
  *(uint *)(param_2 + 0x2a) = -(uint)(*(char *)(param_1 + 0x68) != '\0');
  if (*(char *)(param_1 + 0x69) != '\0') {
    *(undefined4 *)(param_2 + 0x25) = 1;
  }
  if ((*(int *)(param_1 + 0x6c) == 1) || (*(int *)(param_2 + 0x25) == 1)) {
    *(undefined4 *)((longlong)param_2 + 0x154) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x2c) = 0xec;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    *(undefined4 *)(param_2 + 0x29) = 1;
    *(undefined4 *)((longlong)param_2 + 0x15c) = 0;
    *(undefined4 *)(param_2 + 0x2b) = 1;
  }
  *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(param_2 + 0x29);
  *(bool *)((longlong)param_2 + 0xdc) = *(int *)((longlong)param_2 + 0x15c) != 0;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x2b);
  if (*(char *)(param_1 + 0x71) != '\0') {
    iVar1 = FUN_00a0c2d0(param_2 + 0x1d);
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)param_2 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x15c);
      *(undefined4 *)(param_2 + 0x29) = 1;
      *(undefined4 *)((longlong)param_2 + 0x15c) = 0;
      *(undefined4 *)(param_2 + 0x2b) = 1;
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    }
  }
  return;
}

