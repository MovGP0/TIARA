/* Ghidra address: 00a05480 */
/* Ghidra symbol: FUN_00a05480 */


void FUN_00a05480(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint *puVar2;
  byte local_29;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_29,1);
  while (local_29 != 0) {
    puVar2 = (uint *)FUN_004095c0(0x104);
    *puVar2 = (uint)local_29;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),puVar2 + 1,(uint)local_29);
    FUN_004ae7e0(param_2,puVar2);
    if (iVar1 < (int)*puVar2) {
      FUN_00a074d0(0x18);
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_29,1);
  }
  return;
}

