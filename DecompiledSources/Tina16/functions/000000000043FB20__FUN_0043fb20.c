/* Ghidra address: 0043fb20 */
/* Ghidra symbol: FUN_0043fb20 */


undefined8 FUN_0043fb20(undefined8 param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 1;
  uVar1 = param_2 >> 4;
  uVar2 = param_2;
  while (uVar1 != 0) {
    iVar3 = iVar3 + 1;
    uVar1 = uVar2 >> 8;
    uVar2 = uVar2 >> 4;
  }
  FUN_0043f800(param_1,param_2,param_3,iVar3,0x30);
  return param_1;
}

