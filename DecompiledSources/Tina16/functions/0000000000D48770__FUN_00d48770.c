/* Ghidra address: 00d48770 */
/* Ghidra symbol: FUN_00d48770 */


undefined8 FUN_00d48770(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = FUN_00d488d0(param_1);
    if (param_2 <= iVar1) {
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x88) = 0;
        FUN_00410f20(uVar2);
      }
      uVar2 = FUN_00d49700(&PTR_FUN_00d35c60,1,*(undefined8 *)(param_1 + 0x18),param_2);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
  }
  return uVar2;
}

