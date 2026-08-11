/* Ghidra address: 004aa8e0 */
/* Ghidra symbol: FUN_004aa8e0 */


longlong FUN_004aa8e0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  uint local_24;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    local_40 = auStack_68;
    local_10 = FUN_004119b0(param_2,param_3);
  }
  else {
    local_30 = *param_2;
    puVar1 = auStack_68;
    local_18 = local_30;
    if (param_3 != 0) {
      FUN_00410ae0(local_30,&local_48);
      iVar3 = FUN_00416db0(local_48,L"TApplication");
      puVar1 = local_40;
      if (iVar3 != 0) {
        if (*(longlong *)PTR_PTR_02002ff8 == 0) {
          FUN_004098e0(0x1a);
        }
        uVar4 = FUN_004121f0(param_1);
        FUN_00411f00(uVar4,0xffffffff);
        cVar2 = FUN_004ef510(*(undefined8 *)(param_1 + 8),local_18,&local_20);
        if (cVar2 == '\0') {
          if (*(int *)(param_1 + 0x10) <= *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
            FUN_004aa580(param_1);
          }
          local_20 = FUN_004aa460(param_1,local_18);
        }
        if (*(longlong *)(local_20 + 8) != -1) {
          *(longlong *)(local_20 + 8) = *(longlong *)(local_20 + 8) + 1;
        }
        FUN_00412130(param_1);
        cVar2 = FUN_004ed970(*(undefined8 *)(local_20 + 0x10),param_3,&local_24);
        if (cVar2 == '\0') {
          local_10 = 0;
        }
        else {
          local_10 = (longlong)param_2 + (ulonglong)local_24;
        }
        goto LAB_004aaa39;
      }
    }
    local_40 = puVar1;
    local_10 = 0;
  }
LAB_004aaa39:
  FUN_00414480(&local_48);
  return local_10;
}

