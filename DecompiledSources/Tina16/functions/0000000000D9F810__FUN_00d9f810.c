/* Ghidra address: 00d9f810 */
/* Ghidra symbol: FUN_00d9f810 */


ulonglong FUN_00d9f810(undefined8 param_1,longlong param_2,int param_3,int param_4,
                      undefined8 param_5,undefined4 *param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_3 == 1) {
    if (param_4 == 1) {
      lVar2 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x39);
      *param_6 = *(undefined4 *)(lVar2 + 0x28);
    }
    else if (param_4 == 4) {
      lVar2 = FUN_00d7efc0(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x10),0x3d);
      *param_6 = *(undefined4 *)(lVar2 + 0x28);
    }
    else {
      uVar1 = FUN_00d9f3f0();
      uVar3 = (ulonglong)uVar1;
    }
  }
  else {
    uVar1 = FUN_00d9f3f0();
    uVar3 = (ulonglong)uVar1;
  }
  return uVar3 & 0xffffffff;
}

