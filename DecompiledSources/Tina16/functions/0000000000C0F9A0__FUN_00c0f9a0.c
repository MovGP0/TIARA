/* Ghidra address: 00c0f9a0 */
/* Ghidra symbol: FUN_00c0f9a0 */


undefined8 FUN_00c0f9a0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_40 [2];
  int local_30;
  int iStack_2c;
  
  local_40[0] = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 0;
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (iVar1 <= iVar3) {
code_r0x00c0fa24:
      local_30 = iVar2 + 1;
      iStack_2c = iVar3 + 1;
      FUN_00414480(local_40);
      return CONCAT44(iStack_2c,local_30);
    }
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),local_40,iVar3);
    iVar1 = 0;
    if (local_40[0] != 0) {
      iVar1 = *(int *)(local_40[0] + -4);
    }
    if (param_2 < iVar4 + iVar1 + 2) {
      iVar2 = param_2 - iVar4;
      goto code_r0x00c0fa24;
    }
    iVar4 = iVar4 + iVar1 + 2;
    iVar3 = iVar3 + 1;
  } while( true );
}

