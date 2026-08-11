/* Ghidra address: 008947e0 */
/* Ghidra symbol: FUN_008947e0 */


void FUN_008947e0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = (code *)0x0;
  if (DAT_01e23568 != 0) {
    uVar1 = FUN_00416740(L"GetAdaptersAddresses");
    pcVar2 = (code *)FUN_00427c10(DAT_01e23568,uVar1);
  }
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_008947c0;
  }
  PTR_FUN_01e23588 = pcVar2;
  (*pcVar2)(param_1,param_2,param_3,param_4,param_5);
  return;
}

