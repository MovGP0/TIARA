/* Ghidra address: 00a37bf0 */
/* Ghidra symbol: FUN_00a37bf0 */


void FUN_00a37bf0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  while( true ) {
    iVar2 = FUN_0062a930(param_2,4);
    if (iVar2 == 1) break;
    FUN_00a37ae0(param_2[0xc],param_2[0xb],
                 *(int *)(*(longlong *)(param_1 + 0x18) + 0x154) - *(int *)(param_2 + 3));
    param_2[2] = param_2[0xb];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x154);
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x154);
  if (*(uint *)(param_2 + 3) < uVar1) {
    FUN_00a37ae0(param_2[0xc],param_2[0xb],uVar1 - *(uint *)(param_2 + 3));
  }
  return;
}

