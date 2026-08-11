/* Ghidra address: 00796dd0 */
/* Ghidra symbol: FUN_00796dd0 */


ulonglong FUN_00796dd0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_00795f90(param_1,param_2);
  lVar4 = param_1;
  iVar3 = FUN_00795ed0(param_1,param_2,uVar2);
  if (-1 < iVar3) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x20);
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),-1 < iVar3) & 0xffffffff;
}

