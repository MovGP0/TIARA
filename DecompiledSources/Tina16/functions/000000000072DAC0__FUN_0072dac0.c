/* Ghidra address: 0072dac0 */
/* Ghidra symbol: FUN_0072dac0 */


void FUN_0072dac0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_60 [5];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar3 = *(int *)(param_1 + 0x1d8);
  iVar4 = *(int *)(param_1 + 0x1dc);
  uVar2 = thunk_FUN_03cc587b(*(undefined8 *)(param_1 + 0x1d0),2);
  local_60[0] = 0x28;
  if ((iVar3 < 0) || (iVar4 < 0)) {
    cVar1 = thunk_FUN_04166da1(uVar2,local_60);
    if (cVar1 != '\0') {
      thunk_FUN_03e49910(*(undefined8 *)(param_1 + 0xd8),&local_38);
      if (iVar3 == -1) {
        iVar3 = ((local_44 - local_4c) - (local_30 - local_38)) / 2 + local_4c;
      }
      if (iVar4 == -1) {
        iVar4 = ((local_40 - local_48) - (local_2c - local_34)) / 2 + local_48;
      }
    }
  }
  thunk_FUN_041cc6e2(*(undefined8 *)(param_1 + 0xd8),0,iVar3,iVar4,0,0,0x15);
  return;
}

