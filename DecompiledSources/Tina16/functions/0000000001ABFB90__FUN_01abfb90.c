/* Ghidra address: 01abfb90 */
/* Ghidra symbol: FUN_01abfb90 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01abfb90(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_3 < *(int *)(param_1 + 0x24) - _DAT_01fcfc68) ||
       (*(int *)(param_1 + 0x2c) + _DAT_01fcfc68 < param_3)) ||
      (param_4 < *(int *)(param_1 + 0x28) - _DAT_01fcfc68)) ||
     (iVar1 = *(int *)(param_1 + 0x30) + _DAT_01fcfc68, iVar1 < param_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

