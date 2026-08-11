/* Ghidra address: 016c4c50 */
/* Ghidra symbol: FUN_016c4c50 */


undefined1 FUN_016c4c50(undefined8 param_1,longlong *param_2,byte *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 *local_140;
  undefined1 local_131;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  lVar5 = (ulonglong)*param_3 + 1;
  pbVar7 = local_128;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar7 = *param_3;
    param_3 = param_3 + 1;
    pbVar7 = pbVar7 + 1;
  }
  local_148 = param_2;
  local_140 = param_4;
  if (param_2 == (longlong *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    iVar3 = (int)param_2[2];
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = FUN_01d347d0(local_148,iVar6);
        cVar1 = FUN_016c4c10(auStack_168,uVar4);
        if (cVar1 != '\0') {
          lVar5 = FUN_01d347d0(local_148,iVar6);
          break;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = (**(code **)(*local_148 + 0x48))(local_148,lVar5);
    *local_140 = uVar2;
  }
  if ((lVar5 == 0) &&
     (iVar3 = FUN_00414f50(local_128,&DAT_016c4d88,(ulonglong)local_128[0] + 1), iVar3 != 0)) {
    FUN_004169a0(&local_130,local_128);
    iVar3 = FUN_004170c0(&DAT_016c4d98,local_130,1);
    if (iVar3 != 1) {
      local_131 = 0;
      goto LAB_016c4d45;
    }
  }
  local_131 = 1;
LAB_016c4d45:
  FUN_00414480(&local_130);
  return local_131;
}

