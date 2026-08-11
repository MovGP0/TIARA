/* Ghidra address: 01024430 */
/* Ghidra symbol: FUN_01024430 */


void FUN_01024430(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00f79100(param_1);
  FUN_00ffb040(param_1,0,0);
  FUN_00f78bb0(param_1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_00f79010();
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x44 + (longlong)iVar1 * 4) = 0xfffffffe;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  FUN_00450070(local_20,*(undefined8 *)(param_1 + 0x8e8),&DAT_01024578,&DAT_0102458c,1);
  FUN_00416cd0(&local_28,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\PIC18\\",
               local_20[0],L".inc");
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0xa0) = plVar2;
  (**(code **)(*plVar2 + 0xd8))(plVar2,local_28);
  FUN_00414560(&local_28,2);
  return;
}

