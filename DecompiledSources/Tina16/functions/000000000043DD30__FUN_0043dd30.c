/* Ghidra address: 0043dd30 */
/* Ghidra symbol: FUN_0043dd30 */


undefined4 FUN_0043dd30(undefined8 param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0043dce0(param_1,*param_2);
  cVar1 = FUN_0043dce0(param_1,param_2[1]);
  return CONCAT31((int3)((uint)(iVar2 << 4) >> 8),(char)(iVar2 << 4) + cVar1);
}

