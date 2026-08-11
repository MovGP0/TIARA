/* Ghidra address: 00729b00 */
/* Ghidra symbol: FUN_00729b00 */


void FUN_00729b00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_10;
  
  iVar2 = (int)param_2;
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    if ((iVar2 < 0) || (0xffff < iVar2)) {
      local_28[0] = 0;
      local_20 = 0;
      local_18 = 0xffff;
      local_10 = 0;
      uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      iVar2 = (int)uVar3;
      param_1 = FUN_0044d8d0(&PTR_FUN_004334c0,uVar3,PTR_PTR_02002fe0,local_28,1);
      FUN_004134c0();
    }
    *(int *)(param_1 + 0x1c) = iVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8);
    if ((lVar1 != 0) && ((*(uint *)(*(longlong *)(param_1 + 8) + 200) & 0x400) == 0)) {
      thunk_FUN_041b2403(lVar1,0x46a,(longlong)*(int *)(param_1 + 0x1c),0);
    }
  }
  return;
}

