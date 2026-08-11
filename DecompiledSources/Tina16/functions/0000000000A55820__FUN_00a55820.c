/* Ghidra address: 00a55820 */
/* Ghidra symbol: FUN_00a55820 */


void FUN_00a55820(longlong param_1,byte param_2,undefined8 param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  char local_3a;
  char local_39;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_50 = auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00460ba0(&local_30);
  FUN_00460b80(&local_30);
  local_39 = FUN_0046f320(param_1 + 0x78 + (ulonglong)param_2 * 0x18,&local_30);
  FUN_00460ba0(&local_30);
  if (local_39 == '\0') {
    local_38 = (ulonglong)param_2;
    uVar1 = *(ushort *)(param_1 + 0x78 + local_38 * 0x18);
    if (uVar1 < 0x20) {
      bVar3 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_00468530(&local_68,0xff439eb2,0xfffffffffffffffc);
      cVar2 = FUN_0046f320(param_1 + 0x78 + (ulonglong)param_2 * 0x18,&local_68);
      if (cVar2 != '\0') {
        local_3a = '\x01';
        goto LAB_00a55934;
      }
    }
    local_3a = '\0';
  }
  else {
    local_3a = '\x01';
  }
LAB_00a55934:
  if (local_3a != '\0') {
    FUN_00461840(param_1 + 0x78 + (ulonglong)param_2 * 0x18,param_3);
  }
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_30);
  return;
}

