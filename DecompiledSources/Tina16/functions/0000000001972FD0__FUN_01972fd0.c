/* Ghidra address: 01972fd0 */
/* Ghidra symbol: FUN_01972fd0 */


void FUN_01972fd0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_0188d920();
  iVar1 = FUN_0188d050(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x228) + 0x20));
  if (iVar1 != -1) {
    uVar3 = FUN_0188d920();
    uVar4 = FUN_0188d920();
    uVar2 = FUN_0188d050(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x228) + 0x20));
    FUN_0188d0f0(uVar3,uVar2);
  }
  return;
}

