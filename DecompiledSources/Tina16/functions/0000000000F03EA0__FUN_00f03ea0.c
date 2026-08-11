/* Ghidra address: 00f03ea0 */
/* Ghidra symbol: FUN_00f03ea0 */


void FUN_00f03ea0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00efe458);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    if ((*(ushort *)(*(longlong *)(param_2 + 8) + 0x4f) & 0x80) != 0) {
      uVar2 = FUN_00f04050(param_2);
      FUN_00f04400(param_1,uVar2);
    }
    if ((*(ushort *)(*(longlong *)(param_2 + 8) + 0x4f) & 0x20) != 0) {
      uVar2 = FUN_00f04080(param_2);
      FUN_00f04440(param_1,uVar2);
    }
    if ((*(ushort *)(*(longlong *)(param_2 + 8) + 0x4f) & 0x40) != 0) {
      FUN_00f040b0(param_2,&local_20);
      (**(code **)(*param_1 + 0x18))(param_1,local_20);
    }
    if ((*(ushort *)(*(longlong *)(param_2 + 8) + 0x4f) & 0x100) != 0) {
      uVar3 = FUN_00f040f0(param_2);
      FUN_00f04480(param_1,uVar3);
    }
  }
  FUN_00414480(&local_20);
  return;
}

