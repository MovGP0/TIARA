/* Ghidra address: 01663e30 */
/* Ghidra symbol: FUN_01663e30 */


void FUN_01663e30(longlong param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong local_30 [2];
  
  if (param_2 == 1) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x13ae0) + 8);
    *piVar1 = *piVar1 + -7;
    *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) + -1;
    FUN_0165dfb0(param_1,0x84);
    FUN_0165dfb0(param_1,0xc0);
    FUN_0165dfb0(param_1,0xf);
    FUN_0165dfb0(param_1,0x84);
    *param_3 = *(int *)(*(longlong *)(param_1 + 0x13ae0) + 8);
    FUN_0165e0c0(param_1,0);
  }
  else if (param_2 == 2) {
    FUN_0165dfb0(param_1,0xe9);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x13ae0) + 8);
    FUN_0165e0c0(param_1,0);
    local_30[0] = (longlong)((*(int *)(*(longlong *)(param_1 + 0x13ae0) + 8) - *param_3) + -4);
    FUN_00409a70(local_30,**(longlong **)(param_1 + 0x13ae0) + (longlong)*param_3,4);
    *param_3 = iVar2;
    *(int *)(param_1 + 0x13ac0) = *(int *)(param_1 + 0x13ac0) + -1;
  }
  else if (param_2 == 3) {
    local_30[0] = (longlong)((*(int *)(*(longlong *)(param_1 + 0x13ae0) + 8) - *param_3) + -4);
    FUN_00409a70(local_30,**(longlong **)(param_1 + 0x13ae0) + (longlong)*param_3,4);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x8b);
      FUN_0165dfb0(param_1,0x84);
      FUN_0165dfb0(param_1,0x24);
      FUN_0165e0c0(param_1,(*(int *)(param_1 + 0x13ac0) + -1) * 8);
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0xbb);
      FUN_0165e150(param_1,*(undefined8 *)(param_1 + 0x118));
      FUN_0165dfb0(param_1,0x48);
      FUN_0165dfb0(param_1,0x89);
      FUN_0165dfb0(param_1,3);
    }
  }
  return;
}

