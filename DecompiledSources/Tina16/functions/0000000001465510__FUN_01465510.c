/* Ghidra address: 01465510 */
/* Ghidra symbol: FUN_01465510 */


void FUN_01465510(longlong param_1)

{
  longlong *plVar1;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20[0] + 0x78))(local_20[0],0);
  FUN_01c80630(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)PTR_DAT_02004030);
  FUN_01d23250(*(undefined8 *)(param_1 + 0x860),local_20,PTR_DAT_02004010,
               *(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0xb48) + 0x650);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)PTR_DAT_02002d20 + 0x868) + 0x4e8);
  (**(code **)(*plVar1 + 0x10))(plVar1,local_20[0]);
  FUN_00410f20(local_20[0]);
  return;
}

