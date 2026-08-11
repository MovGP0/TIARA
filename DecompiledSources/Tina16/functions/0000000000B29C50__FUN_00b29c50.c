/* Ghidra address: 00b29c50 */
/* Ghidra symbol: FUN_00b29c50 */


void FUN_00b29c50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort uVar4;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  ushort local_2a;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (1 < iVar3) {
    uVar1 = FUN_00415ab0(param_2);
    FUN_00409a70(uVar1,&local_2a,2);
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (iVar3 < (int)((uint)local_2a * 6 + 2)) {
      FUN_00b146c0(&PTR_FUN_00b141e0,1,0xe);
      FUN_004134c0();
    }
    iVar3 = 3;
    uVar4 = local_2a;
    do {
      FUN_00409a70(param_2 + -1 + (longlong)iVar3,&local_2c,2);
      FUN_00409a70(param_2 + -1 + (longlong)(iVar3 + 2),&local_2e,2);
      FUN_00409a70(param_2 + -1 + (longlong)(iVar3 + 4),&local_30,2);
      iVar3 = iVar3 + 6;
      puVar2 = (undefined2 *)FUN_004095c0(6);
      *puVar2 = local_2c;
      puVar2[1] = local_2e;
      puVar2[2] = local_30;
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),puVar2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

