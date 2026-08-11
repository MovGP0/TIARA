/* Ghidra address: 0072bc40 */
/* Ghidra symbol: FUN_0072bc40 */


undefined8 FUN_0072bc40(void)

{
  int iVar1;
  undefined8 uVar2;
  short *psVar3;
  short local_78 [26];
  short asStack_44 [26];
  int local_10;
  undefined4 uStack_c;
  
  iVar1 = 0;
  psVar3 = local_78;
  do {
    *psVar3 = (short)iVar1 + 0x41;
    iVar1 = iVar1 + 1;
    psVar3 = psVar3 + 1;
  } while (iVar1 != 0x1a);
  iVar1 = 0;
  do {
    local_78[iVar1 + 0x1a] = (short)iVar1 + 0x61;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x1a);
  uVar2 = FUN_005ffa40();
  thunk_FUN_040d447e(uVar2,local_78,0x34,&local_10);
  return CONCAT44(uStack_c,local_10 / 0x34);
}

