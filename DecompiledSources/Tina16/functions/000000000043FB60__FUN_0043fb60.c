/* Ghidra address: 0043fb60 */
/* Ghidra symbol: FUN_0043fb60 */


undefined8 FUN_0043fb60(undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 1;
  uVar1 = param_2;
  while (uVar1 = uVar1 >> 4, uVar1 != 0) {
    iVar2 = iVar2 + 1;
  }
  FUN_0043f990(param_1,param_2,param_3,iVar2,0x30);
  return param_1;
}

