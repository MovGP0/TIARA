/* Ghidra address: 015ebc90 */
/* Ghidra symbol: FUN_015ebc90 */


void FUN_015ebc90(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_007fc180(&PTR_FUN_015eac68,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002648 = uVar2;
  FUN_0064de00(*(undefined8 *)PTR_DAT_02002648,L"Compile Messages");
  FUN_015eb2a0(*(undefined8 *)PTR_DAT_02002648,*(undefined8 *)(param_1 + 0x20));
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02002648 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x40));
  FUN_008059a0(*(undefined8 *)PTR_DAT_02002648);
  return;
}

