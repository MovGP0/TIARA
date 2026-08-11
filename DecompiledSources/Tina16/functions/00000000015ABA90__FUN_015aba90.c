/* Ghidra address: 015aba90 */
/* Ghidra symbol: FUN_015aba90 */


void FUN_015aba90(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_1c;
  
  if (DAT_01f6bdf0 == 0) {
    DAT_01f6bdf0 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  }
  local_1c = 0;
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      if (*(longlong *)(param_1 + (longlong)local_1c * 8) != 0) {
        lVar3 = *(longlong *)(param_1 + (longlong)local_1c * 8);
        iVar1 = (**(code **)(lVar3 + 0x18))(lVar3);
        if (iVar1 != -1) {
          lVar3 = *(longlong *)(param_1 + (longlong)local_1c * 8);
          uVar2 = (**(code **)(lVar3 + 0x18))(lVar3);
          lVar3 = FUN_015ab640(uVar2);
          if (lVar3 == 0) {
            FUN_004ae7e0(DAT_01f6bdf0,*(undefined8 *)(param_1 + (longlong)local_1c * 8));
          }
          else {
            uVar2 = FUN_004aeba0(DAT_01f6bdf0,lVar3);
            FUN_004aedb0(DAT_01f6bdf0,uVar2,*(undefined8 *)(param_1 + (longlong)local_1c * 8));
          }
        }
      }
      local_1c = local_1c + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

