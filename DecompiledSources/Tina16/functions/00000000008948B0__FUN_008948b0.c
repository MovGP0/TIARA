/* Ghidra address: 008948b0 */
/* Ghidra symbol: FUN_008948b0 */


void FUN_008948b0(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)0x0;
  if (DAT_01e23568 != 0) {
    uVar1 = FUN_00416740(L"ConvertLengthToIpv4Mask");
    pcVar2 = (code *)FUN_00427c10(DAT_01e23568,uVar1);
  }
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_00894890;
  }
  PTR_FUN_01e23590 = pcVar2;
  (*pcVar2)(param_1,param_2);
  return;
}

