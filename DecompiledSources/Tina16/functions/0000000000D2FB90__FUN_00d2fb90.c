/* Ghidra address: 00d2fb90 */
/* Ghidra symbol: FUN_00d2fb90 */


longlong * FUN_00d2fb90(void)

{
  longlong *plVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = 4;
  ppuVar2 = &PTR_s_TPro16EduNs_01eccc58;
  do {
    FUN_00416880(&local_20,*ppuVar2);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
    ppuVar2 = ppuVar2 + 0xe;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00414480(&local_20);
  return plVar1;
}

