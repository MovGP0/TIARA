/* Ghidra address: 01b8b0e0 */
/* Ghidra symbol: FUN_01b8b0e0 */


undefined1 FUN_01b8b0e0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 local_5d;
  int local_5c;
  undefined8 local_50;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_40[0] = *param_3;
  local_5d = 0;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10) + 0x10);
  local_5c = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x10),local_5c);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      if (((*(longlong *)(param_1 + 0x48) != 0) &&
          (cVar1 = FUN_0198a580(*(undefined8 *)(param_1 + 0x48)), cVar1 == '\x05')) &&
         (cVar1 = FUN_017c3740(*(undefined8 *)(param_1 + 0x48)), cVar1 == '\0')) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1f0))
                  (*(longlong **)(param_1 + 0x48),0,param_1 + 0x58,param_1 + 0x5c);
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x1f0))
                  (*(longlong **)(param_1 + 0x48),1,param_1 + 0x50,param_1 + 0x54);
        cVar1 = FUN_01b8b0a0(param_1,param_1 + 0x58,local_40);
        if ((cVar1 != '\0') ||
           (cVar1 = FUN_01b8b0a0(param_1,param_1 + 0x50,local_40), cVar1 != '\0')) {
          local_5d = 1;
          goto LAB_01b8b31b;
        }
      }
      local_5c = local_5c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x3a8) + 0x10);
  local_5c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x3a8),local_5c);
      if (lVar4 != param_2) {
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x1c8))();
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x1f0))
                      (*(longlong **)(lVar4 + 8),iVar6,local_48,local_44);
            (**(code **)(**(longlong **)(lVar4 + 8) + 0x298))
                      (*(longlong **)(lVar4 + 8),&local_50,iVar6);
            cVar1 = FUN_01b8b0a0(param_1,local_48,local_40);
            if (cVar1 != '\0') {
              local_5d = 1;
              goto LAB_01b8b31b;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_5c = local_5c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
LAB_01b8b31b:
  FUN_00414480(&local_50);
  return local_5d;
}

