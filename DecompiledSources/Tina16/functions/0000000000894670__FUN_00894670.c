/* Ghidra address: 00894670 */
/* Ghidra symbol: FUN_00894670 */


void FUN_00894670(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)0x0;
  if (DAT_01e23568 != 0) {
    uVar1 = FUN_00416740(L"GetUniDirectionalAdapterInfo");
    pcVar2 = (code *)FUN_00427c10(DAT_01e23568,uVar1);
  }
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_00894660;
  }
  PTR_FUN_01e23578 = pcVar2;
  (*pcVar2)(param_1,param_2);
  return;
}

