/* Ghidra address: 004c58f0 */
/* Ghidra symbol: FUN_004c58f0 */


void FUN_004c58f0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_50 = auStack_78;
  local_40 = *param_2;
  lVar2 = FUN_00589390(*(undefined8 *)(local_40 + -0xa8));
  local_24 = (int)*(short *)(lVar2 + 0x10);
  if (0 < local_24) {
    local_20 = FUN_004095c0((longlong)(local_24 * 8));
    local_48 = *param_2;
    FUN_00589f00(*(undefined8 *)(local_48 + -0xa8),local_20);
    local_28 = 0;
    iVar3 = local_24;
    if (-1 < local_24 + -1) {
      do {
        local_30 = *(longlong *)(local_20 + (longlong)local_28 * 8);
        if (local_30 == 0) break;
        cVar1 = FUN_0058ad50(param_2,local_30);
        if (cVar1 != '\0') {
          FUN_004c78a0(param_1,param_2,local_30);
        }
        local_28 = local_28 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004095f0(local_20,(longlong)(local_24 * 8));
  }
  (**(code **)(*param_2 + 8))(param_2,param_1);
  return;
}

