/* Ghidra address: 00a55240 */
/* Ghidra symbol: FUN_00a55240 */


undefined1 FUN_00a55240(longlong param_1,byte param_2,undefined1 *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_51 = 0;
  uVar4 = (ulonglong)param_2;
  cVar2 = FUN_0046c390(param_1 + 0x78 + uVar4 * 0x18);
  if (cVar2 == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x78 + uVar4 * 0x18);
    if (uVar1 < 0x20) {
      bVar5 = (1 << ((byte)uVar1 & 0x1f) & 0x1f000cU) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar4 = (ulonglong)param_2;
      FUN_00468530(&local_38,0,1);
      cVar2 = FUN_0046f3d0(param_1 + 0x78 + uVar4 * 0x18,&local_38);
      if (cVar2 != '\0') {
        FUN_00468530(&local_50,8,1);
        cVar2 = FUN_0046f380(param_1 + 0x78 + uVar4 * 0x18,&local_50);
        if (cVar2 != '\0') {
          uVar3 = FUN_00462650(param_1 + 0x78 + uVar4 * 0x18);
          *param_3 = uVar3;
          local_51 = 1;
        }
      }
    }
  }
  else {
    FUN_00467e90(&local_20,param_1 + 0x78 + uVar4 * 0x18);
    local_51 = FUN_00a2be20(local_20,param_3);
  }
  FUN_00417840(&local_50,&DAT_004013d8,2);
  FUN_00414480(&local_20);
  return local_51;
}

