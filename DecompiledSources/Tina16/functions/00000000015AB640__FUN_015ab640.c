/* Ghidra address: 015ab640 */
/* Ghidra symbol: FUN_015ab640 */


undefined8 FUN_015ab640(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int local_res8;
  int local_24;
  
  local_res8 = param_1;
  if (param_1 == -1) {
    local_res8 = FUN_015a9200();
  }
  if (DAT_01f6bdf0 != 0) {
    iVar4 = *(int *)(DAT_01f6bdf0 + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_004aeac0(DAT_01f6bdf0,local_24);
        iVar1 = (**(code **)(lVar2 + 0x18))(lVar2);
        if (iVar1 == local_res8) {
          uVar3 = FUN_004aeac0(DAT_01f6bdf0,local_24);
          return uVar3;
        }
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

