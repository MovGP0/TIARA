/* Ghidra address: 006ef750 */
/* Ghidra symbol: FUN_006ef750 */


void FUN_006ef750(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int local_30;
  int iStack_2c;
  
  uVar3 = FUN_006ef710(param_1);
  iVar1 = *param_2;
  local_30 = (int)uVar3;
  if ((local_30 != iVar1) || (iStack_2c = (int)((ulonglong)uVar3 >> 0x20), iStack_2c != param_2[1]))
  {
    lVar4 = FUN_006eed60(param_1);
    if (*(byte *)(lVar4 + 0x4a1) < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)lVar4 >> 8),1) << (*(byte *)(lVar4 + 0x4a1) & 0x1f) &
              3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      uVar3 = FUN_006eeda0(param_1);
      uVar2 = FUN_006ef6e0(param_1);
      FUN_00611ef0(uVar3,uVar2,iVar1,param_2[1]);
    }
  }
  return;
}

