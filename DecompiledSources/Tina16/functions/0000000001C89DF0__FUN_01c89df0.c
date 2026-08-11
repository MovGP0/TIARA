/* Ghidra address: 01c89df0 */
/* Ghidra symbol: FUN_01c89df0 */


void FUN_01c89df0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  
  local_30 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
  if (local_28 != 0) {
    cVar2 = FUN_01d04d40(local_28);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1910) + 0xa8))
                        (*(longlong **)(param_1 + 0x1910));
      if (cVar2 != '\0') {
        if (*(char *)(local_28 + 0x1a0) == '\x02') {
          FUN_0176cff0(*(undefined8 *)(local_28 + 0x1a8));
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 1) {
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_38);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_38,0,*PTR_DAT_02002038);
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 2) {
          lVar1 = *(longlong *)(local_28 + 0x1a8);
          if ((*(char *)(lVar1 + 0x70) == '\x01') && (*(longlong *)(lVar1 + 8) != 0)) {
            FUN_01440040(*(undefined8 *)(lVar1 + 8),&LAB_01c8a188,0);
          }
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_40);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_40,1,*PTR_DAT_02002038);
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 3) {
          lVar1 = *(longlong *)(local_28 + 0x1a8);
          if ((*(char *)(lVar1 + 0x70) == '\x01') && (*(longlong *)(lVar1 + 8) != 0)) {
            FUN_01440040(*(undefined8 *)(lVar1 + 8),&LAB_01c8a188,0);
          }
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_48);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_48,2,*PTR_DAT_02002038);
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 4) {
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_50);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_50,3,*PTR_DAT_02002038);
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 5) {
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_58);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_58,4,*PTR_DAT_02002038);
        }
        iVar3 = FUN_00724300(*(undefined8 *)(param_1 + 0x1910));
        if (iVar3 == 6) {
          FUN_00724270(*(undefined8 *)(param_1 + 0x1910),&local_60);
          (**(code **)(**(longlong **)(local_28 + 0x1a8) + 0x30))
                    (*(longlong **)(local_28 + 0x1a8),local_60,5,*PTR_DAT_02002038);
        }
      }
    }
  }
  FUN_00414560(&local_60,6);
  return;
}

