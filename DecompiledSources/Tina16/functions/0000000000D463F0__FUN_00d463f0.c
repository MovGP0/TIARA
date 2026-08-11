/* Ghidra address: 00d463f0 */
/* Ghidra symbol: FUN_00d463f0 */


undefined8 FUN_00d463f0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_00d463d0(param_1);
    if (param_2 < iVar1) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(param_1 + 0x80) = 0;
        FUN_00410f20(uVar2);
      }
      uVar2 = FUN_00d46d10(&PTR_FUN_00d33e18,1,*(undefined8 *)(param_1 + 0x18),param_2);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
  }
  return uVar2;
}

