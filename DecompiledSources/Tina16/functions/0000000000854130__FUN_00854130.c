/* Ghidra address: 00854130 */
/* Ghidra symbol: FUN_00854130 */


ulonglong FUN_00854130(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_3 = 0;
  uVar1 = FUN_00853250(param_1,param_2);
  iVar2 = FUN_008531a0(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00414ad0(param_3,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18)
                );
  }
  else {
    FUN_00414480(param_3);
  }
  return CONCAT71((int7)((ulonglong)param_2 >> 8),-1 < iVar2) & 0xffffffff;
}

