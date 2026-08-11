/* Ghidra address: 0184f790 */
/* Ghidra symbol: FUN_0184f790 */


void FUN_0184f790(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      plVar1 = *(longlong **)(param_1 + 0x28);
      *(undefined1 *)(plVar1 + 5) = 0;
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
    }
    else {
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x30),&DAT_0184f940);
      if (iVar2 == 0) {
        plVar1 = *(longlong **)(param_1 + 0x28);
        (**(code **)(*plVar1 + 0x10))(plVar1,&local_58);
        FUN_00468530(&local_70,1,1);
        FUN_0046f1c0(&local_58,&local_70);
        (**(code **)(*plVar1 + 8))(plVar1,&local_58);
      }
      else {
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x30),&LAB_0184f950);
        if (iVar2 == 0) {
          plVar1 = *(longlong **)(param_1 + 0x28);
          (**(code **)(*plVar1 + 0x10))(plVar1,&local_88);
          FUN_00468530(&local_a0,1,1);
          FUN_0046f1e0(&local_88,&local_a0);
          (**(code **)(*plVar1 + 8))(plVar1,&local_88);
        }
      }
    }
  }
  FUN_00417840(&local_a0,&DAT_004013d8,5);
  return;
}

