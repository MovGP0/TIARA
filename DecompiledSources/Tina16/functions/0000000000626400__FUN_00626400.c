/* Ghidra address: 00626400 */
/* Ghidra symbol: FUN_00626400 */


undefined8 FUN_00626400(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((DAT_01df1878 == (code *)0x0) && (DAT_01df1870 != 0)) {
    DAT_01df1878 = (code *)FUN_00427c10(DAT_01df1870,L"SetInputScope");
  }
  if (DAT_01df1878 == (code *)0x0) {
    uVar1 = 0x80004005;
  }
  else {
    uVar1 = (*DAT_01df1878)(param_1,param_2);
  }
  return uVar1;
}

