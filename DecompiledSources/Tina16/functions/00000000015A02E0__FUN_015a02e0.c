/* Ghidra address: 015a02e0 */
/* Ghidra symbol: FUN_015a02e0 */


undefined8 FUN_015a02e0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    uVar2 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),
                       1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f),1);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      return 1;
    }
  }
  if (*(int *)(lVar1 + 0x2c) == 0) {
    *(int *)(lVar1 + 0x2c) = 1 << ((byte)*(undefined4 *)(lVar1 + 0x28) & 0x1f);
    *(undefined4 *)(lVar1 + 0x34) = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
  }
  if (param_3 < *(uint *)(lVar1 + 0x2c)) {
    local_28 = *(int *)(lVar1 + 0x2c) - *(int *)(lVar1 + 0x34);
    if (param_3 < local_28) {
      local_28 = param_3;
    }
    FUN_01596930((ulonglong)*(uint *)(lVar1 + 0x34) + *(longlong *)(lVar1 + 0x38),
                 param_2 - (ulonglong)param_3,local_28);
    param_3 = param_3 - local_28;
    if (param_3 == 0) {
      *(uint *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + local_28;
      if (*(int *)(lVar1 + 0x34) == *(int *)(lVar1 + 0x2c)) {
        *(undefined4 *)(lVar1 + 0x34) = 0;
      }
      if (*(uint *)(lVar1 + 0x30) < *(uint *)(lVar1 + 0x2c)) {
        *(uint *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + local_28;
      }
    }
    else {
      FUN_01596930(*(undefined8 *)(lVar1 + 0x38),param_2 - (ulonglong)param_3,param_3);
      *(uint *)(lVar1 + 0x34) = param_3;
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x2c);
    }
  }
  else {
    FUN_01596930(*(undefined8 *)(lVar1 + 0x38),param_2 - (ulonglong)*(uint *)(lVar1 + 0x2c),
                 *(undefined4 *)(lVar1 + 0x2c));
    *(undefined4 *)(lVar1 + 0x34) = 0;
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x2c);
  }
  return 0;
}

