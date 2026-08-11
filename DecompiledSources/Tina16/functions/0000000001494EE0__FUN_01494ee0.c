/* Ghidra address: 01494ee0 */
/* Ghidra symbol: FUN_01494ee0 */


void FUN_01494ee0(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  uVar4 = FUN_00b89270();
  FUN_00b8d260(uVar4,param_1,0xffffffff);
  uVar4 = FUN_00b89270();
  FUN_0041ddd0(&local_28,PTR_PTR_02005710);
  FUN_00b8e650(uVar4,local_20,L"d.DesignToolObject_Dfm_More",local_28);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_20[0]);
  FUN_00bbae50(*(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + 0x610),1);
  uVar2 = FUN_013b9740(PTR_DAT_02004010);
  uVar3 = FUN_013b9680(*(undefined8 *)(*(longlong *)(param_1 + 0xbb0) + 0x20));
  FUN_01499620(param_1,uVar2 | uVar3,0);
  if (*(int *)(param_1 + 0xc08) == 1) {
    uVar1 = FUN_0149bcb0(param_1);
    *(undefined1 *)(param_1 + 0xc0c) = uVar1;
  }
  FUN_00414560(&local_28,2);
  return;
}

