/* Ghidra address: 0064f9e0 */
/* Ghidra symbol: FUN_0064f9e0 */


undefined8 FUN_0064f9e0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  if (*(char *)((longlong)param_1 + 0xad) == '\x05') {
    uVar2 = 1;
  }
  else {
    local_2c[0] = *param_2;
    local_30 = *param_3;
    puVar3 = &local_30;
    uVar2 = (**(code **)(*param_1 + 0xa8))(param_1,local_2c,puVar3);
    bVar1 = *(byte *)((longlong)param_1 + 0xad);
    if (bVar1 < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)puVar3 >> 8),1) << (bVar1 & 0x1f) & 0x19U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *param_2 = local_2c[0];
    }
    if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 7U) != 0) {
      *param_3 = local_30;
    }
  }
  return uVar2;
}

